#!/usr/bin/env python3
"""
NBV Planner Node
Evaluates candidate views using octomap services
Publishes best view pose and candidate views visualization
"""

import os
from os.path import join
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, PoseArray, Pose
from std_msgs.msg import Int32, Float64MultiArray, Bool, Float64
from visualization_msgs.msg import Marker
from octomap_operations_interfaces.srv import FocusPoint, OctomapData, StopOctomapUpdate, ViewEvaluate
import numpy as np
from ament_index_python.packages import get_package_share_directory
from scipy.spatial.transform import Rotation as R
from robot_actions.msg import TargetPose, GoalState
import json
import time

class TestCandidateViews(Node):
    
    def __init__(self):
        super().__init__('test_candidate_views')
        
        # Declare parameters
        self.declare_parameter('search_space_center', [0.0, 0.0, 0.45])
        self.declare_parameter('search_space_radius', 3.0)
        self.declare_parameter('search_space_height', 0.45)
        self.declare_parameter('ig_method', 'RSV')
        self.declare_parameter('run_parallel', False)
        self.declare_parameter('num_of_nbv', 10)
        
        # Get parameters
        candidate_views_path = os.path.join(
            get_package_share_directory('nbv_planner'),
            'candidate_views',
            'candidate_views_200.txt'
        )
        self.search_space_center = np.array(self.get_parameter('search_space_center').value)
        self.search_space_radius = self.get_parameter('search_space_radius').value
        self.search_space_height = self.get_parameter('search_space_height').value
        self.ig_method = self.get_parameter('ig_method').value
        self.run_parallel = self.get_parameter('run_parallel').value
        self.num_of_nbv = self.get_parameter('num_of_nbv').value
        
        # Load candidate views
        if not candidate_views_path:
            self.get_logger().error("candidate_views_path is required!")
            raise ValueError("candidate_views_path not set")
        
        self.all_views = np.loadtxt(candidate_views_path)
        self.get_logger().info(f"Loaded {len(self.all_views)} candidate views from {candidate_views_path}")
        
        # Transform views to new search space if needed
        original_radius = 3.0
        original_height = 0.45
        self.all_views[:, :3] = (
            self.all_views[:, :3] * 
            np.array([self.search_space_radius/original_radius, 
                     self.search_space_radius/original_radius, 
                     self.search_space_height/original_height]) + 
            self.search_space_center
        )

        self.all_views=self.all_views[::5,:]
        
        # Publishers
        self.candidate_views_pub = self.create_publisher(
            PoseArray,
            '/nbv/candidate_views',
            10
        )
        
        self.best_view_pub = self.create_publisher(
            PoseStamped,
            '/nbv/best_view',
            10
        )

        self.safety_stop_sub = self.create_subscription(
            Bool,
            '/robot/safety_stop',
            self.safety_stop_callback,
            10
        )

        self.target_pub = self.create_publisher(TargetPose, '/controller/target_nbv', 10)
        self.state_sub = self.create_subscription(GoalState, '/controller/goal_state', self.state_callback, 10)

        self.goal_state= None

        self.safety_stop_active = False

       
        self.method="FOCUS"
        self.prev_eef_position=None
        # Focus point publisher as vector
        self.focus_point_publisher = self.create_publisher(
            Float64MultiArray,
            '/nbv/focus_point',
            10
        )

        self.focus_point_marker_pub = self.create_publisher(
            Marker,
            '/nbv/focus_point_marker',
            10
        )
        
        # Track active goal
        self.active_goal_handle = None
        
        self.get_logger().info('NBV Planner Node initialized')
        self.get_logger().info(f'Using IG method: {self.ig_method}')
        self.get_logger().info(f'Parallel execution: {self.run_parallel}')
        
        
        
        self.get_logger().info('All services and action servers are available. Starting NBV iterations...')

        self.publish_candidate_views()
        self.run_nbv_iteration()

    def state_callback(self, msg):
        """Callback for receiving task error from robot controller."""
        self.goal_state = msg
       

    def safety_stop_callback(self, msg):
        """Callback for topic-driven safety stop (latched)."""
        requested_state = bool(msg.data)
        if requested_state == self.safety_stop_active:
            return

        self.safety_stop_active = requested_state
       
    
    def publish_candidate_views(self):
        """Publish all candidate views as PoseArray for visualization."""
        pose_array = PoseArray()
        pose_array.header.frame_id = "world"
        pose_array.header.stamp = self.get_clock().now().to_msg()
        
        for view in self.all_views:
            pose = Pose()
            pose.position.x = float(view[0])
            pose.position.y = float(view[1])
            pose.position.z = float(view[2])
            pose.orientation.w = float(view[3])
            pose.orientation.x = float(view[4])
            pose.orientation.y = float(view[5])
            pose.orientation.z = float(view[6])
            pose_array.poses.append(pose)
        
        self.candidate_views_pub.publish(pose_array)
        self.get_logger().info(f"Published {len(self.all_views)} candidate views")
    
    def run_nbv_iteration(self):
        """Run one iteration of NBV planning."""
        err_threshold=0.1
        for best_view_idx in range(len(self.all_views)):
            best_view = self.all_views[best_view_idx]

            robot_target_msg = TargetPose()
            robot_target_msg.id = best_view_idx
            target_pose=self.np_to_posestamped(best_view)
            robot_target_msg.target_pose = target_pose
            self.target_pub.publish(robot_target_msg)

            keep_publishing = True
            while keep_publishing and rclpy.ok():
                rclpy.spin_once(self, timeout_sec=0.01)

                if self.goal_state is not None:
                    if self.goal_state.id != best_view_idx:
                        self.get_logger().warning(f"Received goal state for view {self.goal_state.id} while waiting for view {best_view_idx}. Ignoring.")
                        continue
                    if self.goal_state.is_done:
                        keep_publishing = False
                    elif self.goal_state.is_error:
                        self.get_logger().error(f"Error executing NBV {best_view_idx}, moving to next view.")
                        keep_publishing = False
                    elif self.goal_state.is_success:
                        self.get_logger().info(f"Successfully reached NBV {best_view_idx}, moving to next view.")
                        keep_publishing = False
                    else:
                        self.get_logger().debug(f"Waiting for NBV {best_view_idx} to complete. Current state: is_done={self.goal_state.is_done}, is_success={self.goal_state.is_success}, is_error={self.goal_state.is_error}")
                else:
                    self.get_logger().debug(f"Waiting for goal state update for NBV {best_view_idx}...")
                time.sleep(0.1)  # Sleep briefly to avoid busy waiting
        
                
    def np_to_posestamped(self, view):
        """Convert a view represented as a numpy array to a PoseStamped message."""
        pose_msg = PoseStamped()
        pose_msg.header.frame_id = "world"
        pose_msg.header.stamp = self.get_clock().now().to_msg()
        pose_msg.pose.position.x = float(view[0])
        pose_msg.pose.position.y = float(view[1])
        pose_msg.pose.position.z = float(view[2])
        pose_msg.pose.orientation.w = float(view[3])
        pose_msg.pose.orientation.x = float(view[4])
        pose_msg.pose.orientation.y = float(view[5])
        pose_msg.pose.orientation.z = float(view[6])
        return pose_msg
    def publish_target_pose(self, view):
        """Publish the best view as PoseStamped."""
        pose_msg = PoseStamped()
        pose_msg.header.frame_id = "world"
        pose_msg.header.stamp = self.get_clock().now().to_msg()
        pose_msg.pose.position.x = float(view[0])
        pose_msg.pose.position.y = float(view[1])
        pose_msg.pose.position.z = float(view[2])
        pose_msg.pose.orientation.w = float(view[3])
        pose_msg.pose.orientation.x = float(view[4])
        pose_msg.pose.orientation.y = float(view[5])
        pose_msg.pose.orientation.z = float(view[6])
        
        self.target_pose_pub.publish(pose_msg)
    
    def publish_best_view(self, view):
        """Publish the best view as PoseStamped."""
        pose_msg = PoseStamped()
        pose_msg.header.frame_id = "world"
        pose_msg.header.stamp = self.get_clock().now().to_msg()
        pose_msg.pose.position.x = float(view[0])
        pose_msg.pose.position.y = float(view[1])
        pose_msg.pose.position.z = float(view[2])
        pose_msg.pose.orientation.w = float(view[3])
        pose_msg.pose.orientation.x = float(view[4])
        pose_msg.pose.orientation.y = float(view[5])
        pose_msg.pose.orientation.z = float(view[6])
        
        self.best_view_pub.publish(pose_msg)
            

    def eef_pose_callback(self, msg):
        """Callback for end-effector pose updates."""
        self.eef_pose = msg
        self.get_logger().debug(f'Received EEF pose update: [{msg.pose.position.x:.3f}, {msg.pose.position.y:.3f}, {msg.pose.position.z:.3f}]')
        self.get_logger().debug(f'Current active goal: {self.active_goal_handle}')

    def publish_focus_point_marker(self, focus_point):
        """Publish focus point as a sphere marker for RViz visualization."""
        marker = Marker()
        marker.header.frame_id = 'world'
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = 'focus_point'
        marker.id = 0
        marker.type = Marker.SPHERE
        marker.action = Marker.ADD
        marker.pose.position.x = float(focus_point[0])
        marker.pose.position.y = float(focus_point[1])
        marker.pose.position.z = float(focus_point[2])
        marker.pose.orientation.w = 1.0
        marker.scale.x = 0.08
        marker.scale.y = 0.08
        marker.scale.z = 0.08
        marker.color.r = 0.2
        marker.color.g = 0.8
        marker.color.b = 0.2
        marker.color.a = 0.9
        marker.lifetime.sec = 0
        marker.lifetime.nanosec = 0
        self.focus_point_marker_pub.publish(marker)
        
    def direction_to_orientation(self,direction):
        """Convert a direction vector to a pose represented as a dual quaternion.
        Args:
            direction: A 3D direction vector as a numpy array or list.
        Returns:
            A dual quaternion representing the pose with the direction as the z-axis.
        """

        # Normalize the direction vector
        direction /= np.linalg.norm(direction)

        # Calculate the y-axis as the cross product of the direction vector and the [0, 1, 0] vector
        right = np.cross(np.array([0, 0, 1]), direction)
        right /= np.linalg.norm(right)

        # Calculate the x-axis as the cross product of the up vector and the direction vector
        y_vec = np.cross(direction, right)
        y_vec /= np.linalg.norm(y_vec)
        # Create the transformation matrix
        pose = np.eye(3)

        pose[:, 0] = right
        pose[:, 1] = y_vec
        pose[:, 2] = direction
        quaternion = R.from_matrix(pose).as_quat()  
        return quaternion[[3, 0, 1, 2]]  # Return in (w, x, y, z) order
    
    def save_nbv_result(self, result_data, nbv_index, method):
        """Save next best view (NBV) result for the object at `object_index`."""
        save_dir= f"./src/nbv_planner/Results/{method}"
        os.makedirs(save_dir, exist_ok=True)
        result_file = join(save_dir, f"nbv_{nbv_index}.json")
       
        # Convert the result into JSON-serializable types.
        def _make_serializable(o):
            # Enums -> name
            try:
                import enum as _enum
            except Exception:
                _enum = None

            if _enum is not None and isinstance(o, _enum.Enum):
                return o.name
            if isinstance(o, np.ndarray):
                return o.tolist()
            if isinstance(o, dict):
                return {str(k): _make_serializable(v) for k, v in o.items()}
            if isinstance(o, (list, tuple)):
                return [_make_serializable(v) for v in o]
            # common numeric and string types are serializable
            if isinstance(o, (str, int, float, bool)) or o is None:
                return o
            # Fallback: try to convert to string
            try:
                return str(o)
            except Exception:
                return None

        serializable_data = _make_serializable(result_data)

        with open(result_file, 'w') as f:
            json.dump(serializable_data, f, indent=2)

def main(args=None):
    rclpy.init(args=args)
    
    node = TestCandidateViews()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard interrupt, shutting down...')
    finally:
        node.destroy_node()


if __name__ == '__main__':
    main()

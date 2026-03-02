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
from rclpy.action import ActionClient
from geometry_msgs.msg import PoseStamped, PoseArray, Pose
from std_msgs.msg import Int32, Float64MultiArray
from visualization_msgs.msg import Marker
from octomap_operations_interfaces.srv import FocusPoint, OctomapData, StopOctomapUpdate, ViewEvaluate
from robot_actions.action import MoveToGoal
import numpy as np
from ament_index_python.packages import get_package_share_directory
from scipy.spatial.transform import Rotation as R
import json
import time

class NBVPlannerNode(Node):
    
    def __init__(self):
        super().__init__('nbv_planner_node')
        
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

        self.eef_pose_sub = self.create_subscription(
            PoseStamped,
            '/robot/eef_pose',
            self.eef_pose_callback,
            10
        )
        self.eef_pose=None
       
        
        # Service clients for octomap_operations_interfaces
        self.focus_point_client = self.create_client(FocusPoint, '/focus_point')
        self.octomap_data_client = self.create_client(OctomapData, '/octomap_data')
        self.stop_octomap_update_client = self.create_client(StopOctomapUpdate, '/stop_octomap_update')
        self.view_evaluate_client = self.create_client(ViewEvaluate, '/view_evaluate')
        
        # Action client to send goals to robot controller
        self._move_to_goal_client = ActionClient(self, MoveToGoal, 'move_to_goal')

        self.is_first_focus_point_calculation = True  # Flag to track if it's the first focus point calculation
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
        
        is_services_available=False
        while not is_services_available:            
            # Wait for services and publish initial views
            is_services_available = self.wait_for_services()
            continue
        is_move_to_goal_available=False
        while not is_move_to_goal_available:
             is_move_to_goal_available = self._move_to_goal_client.wait_for_server(timeout_sec=5.0)
             continue
        self.get_logger().info('All services and action servers are available. Starting NBV iterations...')

        self.publish_candidate_views()
        self.run_nbv_iteration()
        
        
    def wait_for_services(self, timeout_sec=5.0):
        """Wait for octomap_operations services to be available."""
        all_sevices_available = True
        clients = [
            ('focus_point', self.focus_point_client),
            ('octomap_data', self.octomap_data_client),
            ('stop_octomap_update', self.stop_octomap_update_client),
            ('view_evaluate', self.view_evaluate_client),
        ]
        
        for name, client in clients:
            if client.wait_for_service(timeout_sec=timeout_sec):
                self.get_logger().info(f"Service '{name}' is available")
            else:
                self.get_logger().warn(f"Service '{name}' not available after {timeout_sec}s")
                all_sevices_available = False
        return all_sevices_available
    
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

        nbv_iter=0
        try:
            while nbv_iter < self.num_of_nbv:  # Run only one iteration for now
                self.get_logger().info(f"Starting NBV iteration {nbv_iter+1}")
                # Get octomap data
                octomap_result = self.call_octomap_data()
                while not octomap_result.done():
                    rclpy.spin_once(self, timeout_sec=0.01)
                
                octomap_data = octomap_result.result()
                if octomap_data.ent==-1:
                    rclpy.spin_once(self, timeout_sec=0.01)
                    self.get_logger().warn("Received invalid octomap data, retrying iteration")
                    nbv_iter=0
                    continue

                self.get_logger().info(
                    f"Before NBV evaluation - "
                    f"Octomap stats - Coverage: {octomap_data.cvr:.2f}, "
                    f"Entropy: {octomap_data.ent:.2f}, "
                    f"Unknown: {octomap_data.unknown}, "
                    f"Occupied: {octomap_data.occupied}, "
                    f"Free: {octomap_data.free}"
                )

                 #Save initial result
                if nbv_iter == 0:
                    nbv_result_dict={
                        'octomap_stats': {
                            'coverage': octomap_data.cvr,
                            'entropy': octomap_data.ent,
                            'unknown': octomap_data.unknown,
                            'occupied': octomap_data.occupied,
                            'free': octomap_data.free
                        },
                    }
                    self.save_nbv_result(nbv_result_dict, nbv_iter, self.method)
                
                # Evaluate all candidate views
                view_evaluate_result = self.call_view_evaluate(
                    self.all_views, 
                    ig_method=self.ig_method,
                    run_parallel=self.run_parallel
                )
                
                while not view_evaluate_result.done():
                    rclpy.spin_once(self, timeout_sec=0.01)
                
                response = view_evaluate_result.result()
                view_scores = np.array(response.view_igs)
                elapsed_time = response.elapsed_time
                
                # Find best view
                best_view_idx = np.argmax(view_scores)
                best_view = self.all_views[best_view_idx]
                best_score = view_scores[best_view_idx]
                nbv_calculation_time = elapsed_time
                
                self.get_logger().info(
                    f"NBV Planning - Best view index: {best_view_idx}, "                 
                    f"Evaluation time: {elapsed_time:.2f} ms"
                )
                
                # Publish best view
                self.publish_best_view(best_view)
               
                # Send goal to robot controller and wait for completion
                motion_start_time = self.get_clock().now()
                motion_duration = 0
                focus_counter=0
                focus_time=0
                goal_handle = self.send_goal_to_controller(best_view)
                # Wait for robot to reach goal before next iteration
                if goal_handle:
                    self.get_logger().info('Waiting for robot to reach goal...')
                    result_future = goal_handle.get_result_async()
                    while rclpy.ok() and not result_future.done():

                        if self.method=="FOCUS":
                            
                            current_eef_position = np.array([   
                                    self.eef_pose.pose.position.x,
                                    self.eef_pose.pose.position.y,
                                    self.eef_pose.pose.position.z
                                ])
                            
                            dir_2_center = np.array([self.search_space_center[0]-current_eef_position[0],
                                        self.search_space_center[1]-current_eef_position[1], 0])
                            orientation_toward_center = self.direction_to_orientation(
                                dir_2_center)
                            focus_point_request_np = np.concatenate(
                                (current_eef_position, orientation_toward_center), axis=0)

                            if self.is_first_focus_point_calculation: 
                                focus_counter += 1                           
                                self.prev_eef_position = current_eef_position
                                self.is_first_focus_point_calculation = False
                                focus_point_result = self.call_focus_point(
                                    focus_point_request_np,             
                                    run_parallel=self.run_parallel )
                                
                                while not focus_point_result.done():
                                    rclpy.spin_once(self, timeout_sec=0.01)
                                
                                response = focus_point_result.result()
                                focus_point= np.array(response.focus_pnt)
                                elapsed_time = response.elapsed_time
                                focus_time += elapsed_time
                               
                                self.focus_point_publisher.publish(Float64MultiArray(data=focus_point.tolist()))
                               # self.publish_focus_point_marker(focus_point)
                               
                            elif np.linalg.norm(current_eef_position - self.prev_eef_position) > 1:  # If moved more than 1 meter
                                focus_counter += 1
                                self.prev_eef_position = current_eef_position
                                focus_point_result = self.call_focus_point(
                                    focus_point_request_np,             
                                    run_parallel=self.run_parallel )
                                
                                while not focus_point_result.done():
                                    rclpy.spin_once(self, timeout_sec=0.01)
                                
                                response = focus_point_result.result()
                                focus_point= np.array(response.focus_pnt)
                                elapsed_time = response.elapsed_time
                                focus_time += elapsed_time
                                self.focus_point_publisher.publish(Float64MultiArray(data=focus_point.tolist()))
                                self.publish_focus_point_marker(focus_point)
                              
                        rclpy.spin_once(self, timeout_sec=0.1)
                    motion_end_time = self.get_clock().now()
                    motion_duration = (motion_end_time - motion_start_time).nanoseconds / 1e9
                    self.get_logger().info(f"Robot motion duration: {motion_duration:.2f} seconds")
                    if focus_counter>0:
                        self.get_logger().info(f"Average focus point calculation time: {focus_time/focus_counter:.2f} ms over {focus_counter} calculations")
                    
                    result = result_future.result().result
                    if result.success:
                        self.get_logger().info(
                            f'Goal reached successfully! Final error: {result.final_error:.4f}'
                        )
                    else:
                        self.get_logger().warn('Goal execution failed')

                else:
                    self.get_logger().warn('No goal handle returned, skipping wait')

                time.sleep(5)  # Small delay to ensure octomap is updated after motion

                octomap_result = self.call_octomap_data()
                while not octomap_result.done():
                    rclpy.spin_once(self, timeout_sec=0.01)
                    
                octomap_data = octomap_result.result()
                self.get_logger().info(
                    f"After Visiting NBV - "
                    f"Octomap stats - Coverage: {octomap_data.cvr:.2f}, "
                    f"Entropy: {octomap_data.ent:.2f}, "
                    f"Unknown: {octomap_data.unknown}, "
                    f"Occupied: {octomap_data.occupied}, "
                    f"Free: {octomap_data.free}"
                )

                #Save NBV result
                nbv_result_dict={
                    'nbv_index': (nbv_iter+1),
                    'best_view': best_view.tolist(),
                    'best_score': float(best_score),
                    'motion_duration': motion_duration,
                    'focus_calculations': focus_counter,
                    'average_focus_time': focus_time/focus_counter if focus_counter>0 else 0.0,
                    'octomap_stats': {
                        'coverage': octomap_data.cvr,
                        'entropy': octomap_data.ent,
                        'unknown': octomap_data.unknown,
                        'occupied': octomap_data.occupied,
                        'free': octomap_data.free
                    },
                }
                self.save_nbv_result(nbv_result_dict, nbv_iter, self.method)
                nbv_iter += 1
                
        except Exception as e:
            self.get_logger().error(f"Error in NBV iteration: {str(e)}")
    
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
            
    def call_focus_point(self, pose, run_parallel=False):
        """Call focus_point service."""
        request = FocusPoint.Request()
        request.pose = pose
        request.run_parallel = run_parallel
        return self.focus_point_client.call_async(request)
    
    def call_octomap_data(self):
        """Call octomap_data service."""
        request = OctomapData.Request()
        return self.octomap_data_client.call_async(request)
    
    def call_stop_octomap_update(self, block_updates):
        """Call stop_octomap_update service."""
        request = StopOctomapUpdate.Request()
        request.block_updates = block_updates
        return self.stop_octomap_update_client.call_async(request)
    
    def call_view_evaluate(self, view_list, ig_method="ENT", run_parallel=False):
        """Call view_evaluate service."""
        view_list = view_list.flatten()
        request = ViewEvaluate.Request()
        request.view_list = view_list.tolist()
        request.ig_method = ig_method
        request.run_parallel = run_parallel
        return self.view_evaluate_client.call_async(request)
    
    def send_goal_to_controller(self, best_view):
        """Send the best view as a goal to the robot controller via action."""
        try:
            # Wait for action server
            if not self._move_to_goal_client.wait_for_server(timeout_sec=1.0):
                self.get_logger().warn('move_to_goal action server not available')
                return None
            
            # Create goal message
            goal_msg = MoveToGoal.Goal()
            goal_msg.goal_pose = PoseStamped()
            goal_msg.goal_pose.header.frame_id = 'world'
            goal_msg.goal_pose.header.stamp = self.get_clock().now().to_msg()
            
            goal_msg.goal_pose.pose.position.x = float(best_view[0])
            goal_msg.goal_pose.pose.position.y = float(best_view[1])
            goal_msg.goal_pose.pose.position.z = float(best_view[2])
            goal_msg.goal_pose.pose.orientation.w = float(best_view[3])
            goal_msg.goal_pose.pose.orientation.x = float(best_view[4])
            goal_msg.goal_pose.pose.orientation.y = float(best_view[5])
            goal_msg.goal_pose.pose.orientation.z = float(best_view[6])

            # Send goal synchronously and wait for acceptance
            goal_future = self._move_to_goal_client.send_goal_async(
                goal_msg,
                feedback_callback=self.feedback_callback
            )
            
            self.get_logger().info(f'Sent goal to robot: [{best_view[0]:.3f}, {best_view[1]:.3f}, {best_view[2]:.3f}]')
            
            # Wait for goal to be accepted
            while rclpy.ok() and not goal_future.done():
                rclpy.spin_once(self, timeout_sec=0.01)
            
            goal_handle = goal_future.result()
            if not goal_handle.accepted:
                self.get_logger().warn('Robot controller rejected goal')
                return None
            
            self.get_logger().info('Goal accepted by robot controller')
            return goal_handle
            
        except Exception as e:
            self.get_logger().error(f'Error sending goal: {e}')
            return None
    
    def feedback_callback(self, feedback_msg):
        """Callback for action feedback from robot controller."""
        feedback = feedback_msg.feedback
        self.get_logger().debug(f'Current robot pose: [{feedback.current_pose}')
        self.get_logger().debug(f'Task error: {feedback.task_error:.3f} m')
    
    def goal_response_callback(self, future):
        """Callback when goal is accepted or rejected by robot controller."""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warn('Robot controller rejected goal')
            return
        
        self.get_logger().info('Goal accepted by robot controller')
        self.active_goal_handle = goal_handle
        
        # Request result asynchronously
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.goal_result_callback)
    
    def goal_result_callback(self, future):
        """Callback when robot finishes goal execution."""
        result = future.result().result
        if result.success:
            self.get_logger().info(f'Goal reached successfully! Final error: {result.final_error:.4f}')
        else:
            self.get_logger().warn('Goal execution failed')
            
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
    
    node = NBVPlannerNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard interrupt, shutting down...')
    finally:
        node.destroy_node()


if __name__ == '__main__':
    main()

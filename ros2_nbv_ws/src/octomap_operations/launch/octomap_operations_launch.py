from launch import LaunchDescription
from launch_ros.actions import Node, ComposableNodeContainer
from launch.actions import IncludeLaunchDescription
from launch_ros.descriptions import ComposableNode
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
import yaml


def generate_launch_description():
    # Get the path to the config file
    config_file = os.path.join(
        get_package_share_directory('octomap_operations'),
        'config',
        'octomap_ops_params.yaml'
    )
    
    # Load config file to read parameters
    with open(config_file, 'r') as f:
        config_params = yaml.safe_load(f)
    
    # Extract depth image processing parameters
    depth_params = config_params.get('depth_image_proc', {})
    camera_info_topic = depth_params.get('camera_info_topic', '/sas_b1/b1_1/camera/depth/camera_info')
    image_rect_topic = depth_params.get('image_rect_topic', '/sas_b1/b1_1/camera/depth/image_rect_raw')
    points_topic = depth_params.get('points_topic', '/world/pcl_input')

    # Pointcloud container with depth_image_proc
    container = ComposableNodeContainer(
        name='pointcloud_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',  # multi-threaded
        composable_node_descriptions=[
            ComposableNode(
                package='depth_image_proc',
                plugin='depth_image_proc::PointCloudXyzNode',
                name='point_cloud_xyz',
                remappings=[
                    ('camera_info', camera_info_topic),
                    ('image_rect', image_rect_topic),
                    ('points', points_topic),
                ],
            ),
        ],
        output='screen',
    )

    # Octomap server node - load parameters from config file
    octomap_node = Node(
        package='octomap_server',
        executable='octomap_server_node',
        name='octomap_server',
        output='screen',
        parameters=[config_params.get('octomap_server', {})],
        remappings=[
            ('/cloud_in', points_topic),
        ],
    )

    # Create the octomap operations node
    octomap_operations_node = Node(
        package='octomap_operations',
        executable='octomap_operations_node',
        name='octomap_operations_node',
        output='screen',
        parameters=[config_params.get('octomap_operations_node', {})]
    )

    # Include the NBV planner launch file
    # nbv_planner_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(os.path.join(
    #         get_package_share_directory('nbv_planner'),
    #         'launch',
    #         'nbv_planner_launch.py'
    #     ))
    # )


    return LaunchDescription([
        container,
        octomap_node,
        octomap_operations_node,
       # nbv_planner_launch
    ])

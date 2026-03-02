from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    
    ig_method_arg = DeclareLaunchArgument(
        'ig_method',
        default_value='RSV',
        description='Information gain method (RSV or ENT)'
    )
    
    run_parallel_arg = DeclareLaunchArgument(
        'run_parallel',
        default_value='false',
        description='Enable parallel execution'
    )
    pkg_share_dir = get_package_share_directory('nbv_planner')
    rviz_config_path = os.path.join(pkg_share_dir, 'rviz', 'reconstruction_rviz.rviz')
    
    # NBV Planner Node
    test_candidate_node = Node(
        package='nbv_planner',
        executable='test_candidate_views',
        name='test_candidate_views',
        output='screen',
        parameters=[{
            'search_space_center': [0.0, 0.0, 0.0],
            'search_space_radius': 1.0,
            'search_space_height': 1.0,
            'ig_method': LaunchConfiguration('ig_method'),
            'run_parallel': LaunchConfiguration('run_parallel'),
            "num_of_nbv": 10,
        }]
    )

     # RViz node with reconstruction config
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_path],
        output='screen'
    )

    
    return LaunchDescription([
        ig_method_arg,
        run_parallel_arg,
        test_candidate_node,
        rviz_node,
    ])

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
    
    # NBV Planner Node
    nbv_planner_node = Node(
        package='nbv_planner',
        executable='nbv_planner_node',
        name='nbv_planner_node',
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

    
    return LaunchDescription([
        ig_method_arg,
        run_parallel_arg,
        nbv_planner_node,
    ])

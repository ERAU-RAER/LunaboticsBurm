from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get the package share directory
    package_share_dir = get_package_share_directory('my_robot')

    # Define relative paths to URDF and YAML
    urdf_file = os.path.join(package_share_dir, 'urdf', 'my_robot.urdf')
    config_file = os.path.join(package_share_dir, 'config', 'skid_steer.yaml')

    return LaunchDescription([

        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=['-file', urdf_file, '-entity', 'my_robot'],
            output='screen'
        ),

        Node(
            package='controller_manager',
            executable='ros2_control_node',
            parameters=[config_file],
            output='screen'
        ),

        Node(
            package='teleop_twist_keyboard',
            executable='teleop_twist_keyboard',
            prefix='alacritty -e',
            remappings=[('/cmd_vel', '/skid_steer/cmd_vel')],
            output='screen'
        ),

        # Spawner for the skid_steer controller
        Node(
            package='controller_manager',
            executable='spawner.py',
            arguments=['skid_steer_controller'],
            output='screen'
        ),

        # Spawner for the joint state broadcaster
        Node(
            package='controller_manager',
            executable='spawner.py',
            arguments=['joint_state_broadcaster'],
            output='screen'
        )
    ])
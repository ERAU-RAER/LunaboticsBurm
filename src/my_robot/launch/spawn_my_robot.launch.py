from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get the package share directory
    package_share_dir = get_package_share_directory('my_robot')

    # Define relative paths to URDF and YAML
    urdf_file = os.path.join(package_share_dir, 'urdf', 'my_robot.urdf')

    return LaunchDescription([

        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=['-file', urdf_file, '-entity', 'my_robot'],
            output='screen'
        )
    ])
## Current Structure
```
teleop_input                           <--- Root of the teleop input package
├── teleop_inpu                        <--- ROS2 Nodes for driver input
│   ├── teleop_twist_keyboard.py
│   └── __init__.py
├── package.xml                        <--- Basic package information
├── resource
├── setup.cfg
├── setup.py                           <--- Setup for ROS2 Nodes
└── test
```

## Dependencies and setup (Driver):
1. Add the following lines to your .bashrc file:
```
source /opt/ros/humble/setup.bash
export ROS_DOMAIN_ID=42
```

## Terminal Setup

*Connect Arduinos to host before starting nodes*

### Prep:
```
cd LunaboticsBurm/
colcon build
```
*Close terminal after building*

### Terminal 1:
```
cd LunaboticsBurm/
source install/local_setup.sh
ros2 run teleop_input teleop_twist_keyboard
```

## Known Issues
- None yet
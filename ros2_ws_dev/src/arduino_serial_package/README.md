# Current Structure

ros2_ws_dev
├── launch
│   └── teleop_twist_arduino_launch.xml <-- Put Configs/Parameters here
└── src
    └── arduino_serial_package
		│
        ├── arduino_files
        │   └── arduino_serial_bridge <-- Contains Platform.io project with Arduino .cpp files
		│
        └── arduino_serial_package
            └── arduino_serial_bridge.py <-- Source code for ROS2 node

# Terminal Setup

*Connect Arduino to computer before starting node*

## Terminal 1
```
source /opt/ros/humble/setup.bash
cd LunaboticsBurm/ros2_ws_dev
source install/local_setup.sh
ros2 launch launch/teleop_twist_arduino_launch.xml
```
## Terminal 2
```
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```

## Terminal 3 (*Optional*)
```
ros2 topic echo /arduino_chatter
```
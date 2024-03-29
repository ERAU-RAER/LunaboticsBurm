# Current Structure
```
ros2_ws_dev
├── launch
│   └── teleop_arduino_launch.xml <-- Put Configs/Parameters here
│
└── src
    └── arduino_serial_package
	    │
        ├── arduino_files
        │   └── arduino_serial_bridge <-- Contains Platform.io project with Arduino .cpp files
	    │
        └── arduino_serial_package
            └── arduino_serial_bridge.py <-- Source code for ROS2 node
```
*This needs review^*
# Terminal Setup

*Connect Arduino to computer before starting node*

## Terminal 1
```
source /opt/ros/humble/setup.bash
cd LunaboticsBurm/ros2_ws_dev
source install/local_setup.sh
ros2 launch launch/teleop_arduino_launch.xml
```
## Terminal 2
```
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```
*We change this to make it more sexy, no?^*

## Terminal 3 (*Optional*)
```
ros2 topic echo /arduino_chatter
```

# Known Issues
- Sometimes the port stops working properly resulting in malformed data. Restarting your computer fixes it.
- If the default port doesn't work, run the following command and paste the output into the launch file:
  ```
  ls /dev/serial/by-id/*
  ```

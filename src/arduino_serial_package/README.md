## Current Structure
```
arduino_serial_package                 <--- Root of the Arduino serial communication package
├── arduino_files                      <--- Source code to be flashed to Arduinos
├── arduino_serial_package             <--- ROS2 Nodes for communication
│   ├── arduino_serial_drivetrain.py
│   ├── arduino_serial_linac.py
│   └── __init__.py
├── package.xml                        <--- Basic package information
├── resource
├── setup.cfg
├── setup.py                           <--- Setup for ROS2 Nodes
└── test
```

## Dependencies and setup (Deployed):
1. Python pySerial package
2. Python thread6 package
3. Add serial permissions to linux user:
```
sudo usermod -a -G dialout <username>  # To allow access to the /dev/ttyUSB#
```
4. Add the following lines to your .bashrc file:
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
ros2 launch launch/teleop_arduino_launch.xml
```
### Terminal 2:
```
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```

### Terminal 3 (*Optional*):
```
ros2 topic echo /arduino_chatter
```

## Known Issues
- Sometimes the port stops working properly resulting in malformed data. Restarting your computer fixes it.
- If the default port doesn't work, run the following command and paste the output into the launch file:
```
ls /dev/serial/by-id/*
```
- Make sure the Baudrates set in the launch file matches those found in the Arduino Files programs
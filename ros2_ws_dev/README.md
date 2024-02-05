# Recreate the current setup:
[Humble Doc](https://docs.ros.org/en/humble/Tutorials/Advanced/Simulators/Gazebo/Gazebo.html)

### Useful Links:
[Twist Message Doc (Matlab)](https://www.mathworks.com/help/ros/ug/work-with-basic-ros-2-messages.htmls)
[Unicycle Robot Example](https://medium.com/hackernoon/unicycle-to-differential-drive-courseras-control-of-mobile-robots-with-ros-and-rosbots-part-2-6d27d15f2010)

## Quick Start Commands:

*Run these in different terminals*
```
ign gazebo -v 4 -r visualize_lidar.sdf
```
```
source /opt/ros/humble/setup.bash
ros2 run ros_gz_bridge parameter_bridge /model/vehicle_blue/cmd_vel@geometry_msgs/msg/Twist]ignition.msgs.Twist
```

```
source /opt/ros/humble/setup.bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/model/vehicle_blue/cmd_vel
```

The above commands do actually control the simulated robot...

We need to get the teleop-twist-joy package working with it.

I believe it's probably some topic remapping shenanigans.

### TODO:
1. [ ] Figure out what args make it work
2. [ ] Create a launch file to do it fast
3. [ ] Merge into URDF
4. [ ] Integrarte URDF into launch file

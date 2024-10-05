# Group Simulation and URDF Experiment

This repo houses the ROS2 - Humble workspace for a test of simulation via Gazebo and ROS2 Control


### Structure

The source code of the project follows this structure:

```
LunaboticsBurm                              <--- Root of the ROS2 Workspace
└── src/ 
    └── my_robot/
        ├──config/                          <--- This is where configs go
        ├──launch/                          <--- This is where launch files go
        ├──urdf/                            <--- This is where robot descriptions go
        ├──include/
        ├──src/
        ├──CMakeLists.txt                   <--- This tells the computer how to build our programs
        └──package.xml                      <--- This tells the computer some extra info
```

## Install Me:
    TODO


## Setup Steps:

1. ``` ros2 launch gazebo_ros gazebo.launch.py```
2.  Open new terminal
3 ``` cd ~/LunaboticsBurm
colcon build
source install/setup.bash
ros2 launch my_robot spawn_my_robot.launch.py 
```
# 2024 Lunabotics Competition - RAER Software Repo

This repo houses the ROS2 - Humble workspace for our submission in the 2024 NASA RMC (Regolith Mining Competition)


### Structure

The source code of the project follows this structure:

```
LunaboticsBurm                                   <--- Root of the ROS2 Workspace
├── launch
│   └── teleop_arduino_launch.xml                <--- ROS2 launch files with custom parameters
└── src
    └── arduino_serial_package
        ├── arduino_files                        <--- Companion source code to be deployed on microcrontrollers
        │   ├── drivetrain                       <--- Platform.io project parent directory
        │   │   ├── include
        │   │   ├── lib
        │   │   │   ├── Drive_Kinematics
        │   │   │   │   ├── DD_Kinematics.cpp
        │   │   │   │   └── DD_Kinematics.h
        │   │   │   └── README
        │   │   ├── platformio.ini
        │   │   └── src
        │   │       └── main.cpp
        │   └── linac                            <--- Platform.io project parent directory
        │       ├── include
        │       │   └── Twist-Decoder.hpp
        │       ├── lib
        │       ├── platformio.ini
        │       └── src
        │           └── linac.cpp
        └── arduino_serial_package
            ├── arduino_serial_drivetrain.py     <--- ROS2 Node
            └── arduino_serial_linac.py          <--- ROS2 Node
```

## Code Overview

### ROS2:

1. arduino_serial_drivetrain - This node is responsible for connecting to the drivetrain microcontroller and sending twist commands over serial
2. arduino_serial_linac - This node is responsible for connecting to the linac microcontroller and sending twist commands over serial

### Arduino:

1. drivetrain - This program handles the logic for converting velocity vectors into individual BLDC motor driver signals
2. linac - This program handles the logic for converting velocity vectors into forward/reverse commands for bi-directional linear actuators

**Custom Libraries:**
1. Teleop-decoder - This functional library decodes incoming serial message containing twist command data
2. DD_Kinematics - This class based library handles the setup of motor parameters for various kinematics implementations.

## Setup Details

The setup for each node and Arduino program is documented in each respective README file.

1. For nodes, this is found at the package level.
2. For Arduino files, this is found at the project level.

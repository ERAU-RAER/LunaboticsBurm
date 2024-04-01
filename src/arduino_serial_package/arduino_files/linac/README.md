# Linac Platform.io Project

This Arduino program is written for the Platform.io Vscode extension.
All parameters for flashing can be found in the **platformio.ini** file

This program currently includes the following libraries:
- Teleop-decoder (currently hardcoded into the main source file)

### Setup:
1. Ensure Baudrate correctly matches the one set in the ROS2 Launch file
2. Ensure messages are formated correctly (see corresponding ROS2 Node)
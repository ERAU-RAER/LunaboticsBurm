# Linac Platform.io Project

This Arduino program is written for the Platform.io Vscode extension.
All parameters for flashing can be found in the **platformio.ini** file

**Custom Libraries:**
1. Teleop-decoder - This functional library decodes incoming serial message containing twist command data

### Setup:
1. Ensure Baudrate correctly matches the one set in the ROS2 Launch file
2. Ensure messages are formated correctly (see corresponding ROS2 Node)
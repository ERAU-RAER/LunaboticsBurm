#include <Arduino.h>

struct Twist {
    float linear_x;
    float linear_y;
    float linear_z;
    float angular_x;
    float angular_y;
    float angular_z;
};

void processTwist(const Twist &twist);

void parseTwist(const String &msg);

String command = "";

void setup() {
    Serial.begin(9600);
}

void loop() {
    while (Serial.available() > 0) { // Check if any characters are available
        char incomingChar = Serial.read(); // Read the incoming character
        
        if (incomingChar == '/') { // Check if it's the end of the message
            // Process the received command
            parseTwist(command);
            
            // Reset the command string for the next message
            command = "";
        } else {
            // Append the character to the command string
            command += incomingChar;
        }
    }
}

void processTwist(const Twist &twist) {
    // Print the velocities
    Serial.println("Linear Velocities:");
    Serial.print("  x: ");
    Serial.println(twist.linear_x);
    Serial.print("  y: ");
    Serial.println(twist.linear_y);
    Serial.print("  z: ");
    Serial.println(twist.linear_z);
    
    Serial.println("Angular Velocities:");
    Serial.print("  x: ");
    Serial.println(twist.angular_x);
    Serial.print("  y: ");
    Serial.println(twist.angular_y);
    Serial.print("  z: ");
    Serial.println(twist.angular_z);
}

void parseTwist(const String &msg) {
    Twist twist;
    int index = 0;
    
    // Find linear velocities
    twist.linear_x = msg.substring(index, msg.indexOf(',')).toFloat();
    index = msg.indexOf(',') + 1;
    twist.linear_y = msg.substring(index, msg.indexOf(',', index)).toFloat();
    index = msg.indexOf(',', index) + 1;
    twist.linear_z = msg.substring(index, msg.indexOf(',', index)).toFloat();
    index = msg.indexOf(',', index) + 1;
    
    // Find angular velocities
    twist.angular_x = msg.substring(index, msg.indexOf(',', index)).toFloat();
    index = msg.indexOf(',', index) + 1;
    twist.angular_y = msg.substring(index, msg.indexOf(',', index)).toFloat();
    index = msg.indexOf(',', index) + 1;
    twist.angular_z = msg.substring(index).toFloat();
    
    // Process the Twist message
    processTwist(twist);
}
#include <Arduino.h>

bool debug = true;

struct Twist // This creates a format for storing the velocity data, easily accessible as variables later on in your code
{
    float linear_x;
    float linear_y;
    float linear_z;
    float angular_x;
    float angular_y;
    float angular_z;
};

// Prototypes
Twist parseTwistandReturn(const String &msg); // Handles pulling the data from the serial message

void processTwist(const Twist &twist); // Prints out a return message as a bit of a sanity check

String command = "";
Twist previousTwist = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
Twist daTwist = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
void setup()
{
    Serial.begin(9600); // Make sure this matches the launch file on the ros2 side of things
}

void loop()
{
    while (Serial.available() > 0) // Check if any characters are available
    {
        char incomingChar = Serial.read(); // Read the incoming character

        if (incomingChar == '/') // Delimiter, check if it's the end of the message
        {
            // Process the received command
            daTwist=parseTwistandReturn(command);

            // Reset the command string for the next message
            command = "";
        }
        else
        {
            // Append the character to the command string
            command += incomingChar;
        }
    }
}

Twist parseTwistandReturn(const String &msg)
{
    Twist twist; // Instantiate a new variable "twist" of type Twist (The custom structure from above)
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
    if (debug)
    {
        processTwist(twist); // Replace this with whatever custom functions you would want to run for your arduino script, pass the struct to your custom function
    }

    return twist; //RETURN THE TWWIIIIST
}

void processTwist(const Twist &twist) // Make sure your custom function takes the Twist struct as a parameter
{
    // Check if any of the velocities have changed
    if (twist.linear_x != previousTwist.linear_x ||
        twist.linear_y != previousTwist.linear_y ||
        twist.linear_z != previousTwist.linear_z ||
        twist.angular_x != previousTwist.angular_x ||
        twist.angular_y != previousTwist.angular_y ||
        twist.angular_z != previousTwist.angular_z)
    {
        // Print the velocities
        Serial.println("linear:");
        Serial.print("  x: ");
        Serial.println(twist.linear_x);
        Serial.print("  y: ");
        Serial.println(twist.linear_y);
        Serial.print("  z: ");
        Serial.println(twist.linear_z);

        Serial.println("angular:");
        Serial.print("  x: ");
        Serial.println(twist.angular_x);
        Serial.print("  y: ");
        Serial.println(twist.angular_y);
        Serial.print("  z: ");
        Serial.println(twist.angular_z);

        previousTwist = twist;
    }
}
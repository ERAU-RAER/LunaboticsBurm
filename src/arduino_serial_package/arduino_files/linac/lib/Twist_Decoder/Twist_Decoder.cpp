#include "Arduino.h"
#include "Twist_Decoder.h"

Twist previousTwist = {0.0,  0.0, 0.0, 0.0, 0.0, 0.0};

void sanityCheck(const Twist &twist) // Make sure your custom function takes the Twist struct as a parameter
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

Twist parseTwist(const String &msg)
{
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

  return twist; // RETURN THE TWWIIIIST
}
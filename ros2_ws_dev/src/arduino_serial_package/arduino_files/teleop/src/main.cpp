#include <Arduino.h>
#include <DD_Kinematics.h>

//This all needs to be remade... prettier lol

// ARDUINO NEEDS AN EXTERNAL GROUND, USB GROUND IS TOO DIRTY
// Needs power supplies, voltage is lacking when on usb
// Set information for DD_Kinematics
#define MOTOR_MAX_RPM 20   // motor's maximum rpm
#define WHEEL_DIAMETER 0.5 // robot's wheel diameter expressed in meters
#define WHEEL_DIST 0.6     // distance between the front and back wheels
#define PWM_BITS 8         // microcontroller's PWM pin resolution. Arduino Mega 2560 is using 8 bits (0-255)

// Define pin variables
int motor1_pin = 11;
int motor2_pin = 10;
int dir1_pin = 4;
int dir2_pin = 5;
int stp_1 = 6;
int stp_2 = 7;

DD_Kinematics Kinematics(MOTOR_MAX_RPM, WHEEL_DIAMETER, WHEEL_DIST, PWM_BITS);

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
  // Initalize dir pins as outputs
  // pinMode(dir1_pin, OUTPUT); // Should need these two since the if loop takes care of it
  // pinMode(dir2_pin, OUTPUT); // before the motors are given the pwm output

  // Initialize motor speed control pins as outputs
  pinMode(motor1_pin, OUTPUT);
  pinMode(motor2_pin, OUTPUT);

  // Initialize Enable pins as outputs
  // pinMode(stp_1, OUTPUT);
  // pinMode(stp_2, OUTPUT);
}

void loop()
{
  while (Serial.available() > 0) // Check if any characters are available
  {
    char incomingChar = Serial.read(); // Read the incoming character

    if (incomingChar == '/') // Delimiter, check if it's the end of the message
    {
      // Process the received command
      daTwist = parseTwistandReturn(command);

      // Reset the command string for the next message
      command = "";
    }
    else
    {
      // Append the character to the command string
      command += incomingChar;
    }
  }

  DD_Kinematics::output rpm;
  DD_Kinematics::output pwm;

  // Hardcode velocity and angular velocity to test, in m/s and rad/s
  float linear_vel_x = daTwist.linear_x;
  float ang_vel_z = daTwist.angular_z;

  // find required rpm for each motor to obtain the desired values
  rpm = Kinematics.getRPM(linear_vel_x, ang_vel_z);

  // Disable motor 1 if RPM is zero, check compatability with new driver
  // if (rpm.motor1 == 0)
  // {
  //   digitalWrite(stp_1, LOW);
  // }
  // else
  // {
  //   // Enable motor 1 if RPM is not zero
  //   digitalWrite(stp_1, HIGH);
  // }

  // // Disable motor 2 if RPM is zero
  // if (rpm.motor2 == 0)
  // {
  //   digitalWrite(stp_2, LOW);
  // }
  // else
  // {
  //   // Enable motor 2 if RPM is not zero
  //   digitalWrite(stp_2, HIGH);
  // }
  int motor1_feedback = rpm.motor1;
  int motor2_feedback = rpm.motor2;

  DD_Kinematics::velocities vel;

  vel = Kinematics.getVelocities(motor1_feedback, motor2_feedback);

  // Serial.print("\nVelocity in X: ");
  // Serial.print(vel.linear_x, 2);
  // Serial.print(" m/s");

  // Serial.print("\nAngular Velocity in Z: ");
  // Serial.print(vel.angular_z, 2);
  // Serial.print(" rad/s");
  // Serial.println("\n");

  // Tell the motor which direction to turn based on if the given rpm value is positive or negative
  // if (rpm.motor1 < 0)
  // {
  //   pinMode(dir1_pin, INPUT);
  // }

  // else
  // {
  //   pinMode(dir1_pin, OUTPUT);
  // }

  // if (rpm.motor2 < 0)
  // {
  //   pinMode(dir2_pin, INPUT);
  // }

  // else
  // {
  //   pinMode(dir2_pin, OUTPUT);
  // }

  // Initalize getPWM so that pwm.motor(n) will work
  pwm = Kinematics.getPWM(linear_vel_x, ang_vel_z);

  analogWrite(motor1_pin, abs(pwm.motor1)); // pwm.motor1);
  analogWrite(motor2_pin, abs(pwm.motor2)); // pwm.motor2);

  // //debugging
  // Serial.println(pwm.motor1);
  // Serial.println(pwm.motor2);
  // delay(1000);
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

  return twist; // RETURN THE TWWIIIIST
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
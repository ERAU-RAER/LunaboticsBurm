#include <Arduino.h>
#include <DD_Kinematics.h>
#include <Twist_Decoder.h>

// ARDUINO NEEDS AN EXTERNAL GROUND, USB GROUND IS TOO DIRTY
// Needs power supplies, voltage is lacking when on usb

#define MOTOR_MAX_RPM 70       // motor's maximum rpm
#define WHEEL_DIAMETER 0.21     // robot's wheel diameter expressed in meters
#define FR_WHEELS_DIST 0.925     // distance between the front and back wheels in meters
#define LR_WHEELS_DIST 0.5     // distance between the left and right wheels in meters
#define PWM_BITS 8             // microcontroller's PWM pin resolution. Arduino Mega 2560 is using 8 bits (0-255)

// Define pin variables
int motor1_pin = 11;
int motor2_pin = 10;
int motor3_pin = 9;
int motor4_pin = 5;

int dir1_pin = 22;
int dir2_pin = 23;
int dir3_pin = 24;
int dir4_pin = 25;

DD_Kinematics Kinematics(MOTOR_MAX_RPM, WHEEL_DIAMETER, FR_WHEELS_DIST, LR_WHEELS_DIST, PWM_BITS);

String command = "";
Twist daTwist = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

void setup() 
{
  Serial.begin(9600);

  // Initialize motor speed control pins as outputs
  pinMode(motor1_pin, OUTPUT);
  pinMode(motor2_pin, OUTPUT);
  pinMode(motor3_pin, OUTPUT);
  pinMode(motor4_pin, OUTPUT);
  
} 

void loop()
{
  while (Serial.available() > 0) // Check if any characters are available
  {
    char incomingChar = Serial.read(); // Read the incoming character

    if (incomingChar == '/') // Delimiter, check if it's the end of the message
    {
      // Process the received command
      daTwist = parseTwist(command);

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

  //Hardcode velocity and angular velocity to test, in m/s and rad/s
  float linear_vel_x = daTwist.linear_x;
  float ang_vel_z = daTwist.angular_z;

  //find required rpm for each motor to obtain the desired values
  rpm = Kinematics.getRPM(linear_vel_x, ang_vel_z);

  // Something like what we'd want to do for motor speed feedback. Demo is below to let the motors work
  // int motor1_feedback = rpm.encoder1;
  // int motor2_feedback = rpm.encoder2;
  // int motor3_feedback = rpm.encoder3;
  // int motor4_feedback = rpm.encoder4;

  int motor1_feedback = rpm.motor1;
  int motor2_feedback = rpm.motor2;
  int motor3_feedback = rpm.motor3;
  int motor4_feedback = rpm.motor4;

  DD_Kinematics::velocities vel;

  vel = Kinematics.getVelocities(motor1_feedback, motor2_feedback, motor3_feedback, motor4_feedback);

  // Tell the motor which direction to turn based on if the given rpm value is positive or negative
  if (rpm.motor1 < 0) {
    pinMode(dir1_pin, INPUT);
  }
  else {
    pinMode(dir1_pin, OUTPUT);
  }

  if (rpm.motor2 < 0) {
    pinMode(dir2_pin, INPUT);
  }
  else {
    pinMode(dir2_pin, OUTPUT);
  }

  if (rpm.motor3 < 0) {
    pinMode(dir3_pin, INPUT);
  }
  else {
    pinMode(dir3_pin, OUTPUT);
  }

  if (rpm.motor4 < 0) {
    pinMode(dir4_pin, INPUT);
  }
  else {
    pinMode(dir4_pin, OUTPUT);
  }

  // Initalize getPWM so that pwm.motor(n) will work
  pwm = Kinematics.getPWM(linear_vel_x, ang_vel_z);

  analogWrite(motor1_pin, pwm.motor1);
  analogWrite(motor2_pin, pwm.motor2);
  analogWrite(motor3_pin, pwm.motor3);
  analogWrite(motor4_pin, pwm.motor4);
}
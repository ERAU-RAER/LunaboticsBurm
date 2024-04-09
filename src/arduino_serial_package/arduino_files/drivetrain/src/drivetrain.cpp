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
#define motor1_pin 13
#define motor2_pin 12
#define motor3_pin 11
#define motor4_pin 10

#define dir1_pin 22
#define dir2_pin 23
#define dir3_pin 28
#define dir4_pin 29

#define stop1_pin 24
#define stop2_pin 25
#define stop3_pin 30
#define stop4_pin 31

#define brake1_pin 26
#define brake2_pin 27
#define brake3_pin 32
#define brake4_pin 33

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

  // Initialize dir pins as outputs (Pull low)
  pinMode(dir1_pin, OUTPUT);
  pinMode(dir2_pin, OUTPUT);
  pinMode(dir3_pin, OUTPUT);
  pinMode(dir4_pin, OUTPUT);

  // Initialize Freewheel pins as inputs (Floating)
  pinMode(stop1_pin, INPUT);
  pinMode(stop2_pin, INPUT);
  pinMode(stop3_pin, INPUT);
  pinMode(stop4_pin, INPUT);

  // Initialize Brake pins as outputs (Pull low)
  pinMode(brake1_pin, OUTPUT);
  pinMode(brake2_pin, OUTPUT);
  pinMode(brake3_pin, OUTPUT);
  pinMode(brake4_pin, OUTPUT);
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

  //Disable motor 1 if RPM is zero
  if (rpm.motor1 == 0) {
    digitalWrite(stop1_pin, LOW);
  }
  else {
    // Enable motor 1 if RPM is not zero
    digitalWrite(stop1_pin, HIGH);

  }

  // Disable motor 2 if RPM is zero
  if (rpm.motor2 == 0) {
    digitalWrite(stop2_pin, LOW);
  }
  else {
    // Enable motor 2 if RPM is not zero
    digitalWrite(stop2_pin, HIGH);
  }

    // Disable motor 2 if RPM is zero
  if (rpm.motor3 == 0) {
    digitalWrite(stop3_pin, LOW);
  }
  else {
    // Enable motor 2 if RPM is not zero
    digitalWrite(stop3_pin, HIGH);
  }
  
    // Disable motor 2 if RPM is zero
  if (rpm.motor4 == 0) {
    digitalWrite(stop4_pin, LOW);
  }
  else {
    // Enable motor 2 if RPM is not zero
    digitalWrite(stop4_pin, HIGH);
  }
  // Something like what we'd want to do for motor speed feedback. Demo is below to let the motors work
  // int motor1_feedback = rpm.encoder1;
  // int motor2_feedback = rpm.encoder2;
  // int motor3_feedback = rpm.encoder3;
  // int motor4_feedback = rpm.encoder4;

  float motor1_feedback = rpm.motor1;
  float motor2_feedback = rpm.motor2;
  float motor3_feedback = rpm.motor3;
  float motor4_feedback = rpm.motor4;

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
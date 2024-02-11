#include <Arduino.h>
#include <DD_Kinematics.h>

// Set information for DD_Kinematics
#define MOTOR_MAX_RPM 100       // motor's maximum rpm
#define WHEEL_DIAMETER 0.5      // robot's wheel diameter expressed in meters
#define WHEEL_DIST 0.6          // distance between the front and back wheels
#define PWM_BITS 8              // microcontroller's PWM pin resolution. Arduino Mega 2560 is using 8 bits (0-255)

// Define pin variables
int motor1_pin = 11;
int motor2_pin = 8;
int dir1_pin = 4;
int dir2_pin = 5;
int en_1 = 6;
int en_2 = 7;

DD_Kinematics DD_Kinematics(MOTOR_MAX_RPM, WHEEL_DIAMETER, WHEEL_DIST, PWM_BITS);

void setup() 
{
  Serial.begin(9600);

  // Initalize dir pins as outputs
  // pinMode(dir1_pin, OUTPUT); // Should need these two since the if loop takes care of it
  // pinMode(dir2_pin, OUTPUT); // before the motors are given the pwm output

  // Initialize motor speed control pins as outputs
  pinMode(motor1_pin, OUTPUT);
  pinMode(motor2_pin, OUTPUT);
  
  // Initialize Enable pins as outputs
  pinMode(en_1, OUTPUT);
  pinMode(en_2, OUTPUT);


} 

void loop()
{

  DD_Kinematics::output rpm;
  DD_Kinematics::output pwm;

  //Hardcode some velocities and angular velocity to test, all in m/s
  float linear_vel_x = 1;
  float linear_vel_y = 0;
  float ang_vel_z = 2;

  //find required rpm for each motor to obtain the desired values
  rpm = DD_Kinematics.getRPM(linear_vel_x, linear_vel_y, ang_vel_z);

  Serial.print("Left Motors: ");
  Serial.print(rpm.motor1);
  Serial.print(" rpm");

  Serial.print("\nRight Motors: ");
  Serial.print(rpm.motor2);
  Serial.print(" rpm");

  // Something like what we'd want to do for motor speed feedback. Demo is below to let the motors work
  // int motor1_feedback = rpm.encoder1;
  // int motor2_feedback = rpm.encoder2;

  int motor1_feedback = rpm.motor1;
  int motor2_feedback = rpm.motor2;

  DD_Kinematics::velocities vel;

  vel = DD_Kinematics.getVelocities(motor1_feedback, motor2_feedback);

  Serial.print("\nVelocity in X: ");
  Serial.print(vel.linear_x, 2);
  Serial.print(" m/s");

  Serial.print("\nAngular Velocity in Z: ");
  Serial.print(vel.angular_z, 2);
  Serial.print(" rad/s");
  Serial.println("\n");

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

  // Initalize getPWM so that pwm.motor(n) will work
  pwm = DD_Kinematics.getPWM(linear_vel_x, linear_vel_y, ang_vel_z);

  analogWrite(motor1_pin, pwm.motor1);
  analogWrite(motor2_pin, pwm.motor2);

  delay(100000);
}
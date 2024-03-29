#include <Arduino.h>
#include <DD_Kinematics.h>

// ARDUINO NEEDS AN EXTERNAL GROUND, USB GROUND IS TOO DIRTY
// Needs power supplies, voltage is lacking when on usb
// Set information for DD_Kinematics
#define MOTOR_MAX_RPM 20       // motor's maximum rpm
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

DD_Kinematics Kinematics(MOTOR_MAX_RPM, WHEEL_DIAMETER, WHEEL_DIST, PWM_BITS);

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

  //Hardcode velocity and angular velocity to test, in m/s and rad/s
  float linear_vel_x = 2;
  float ang_vel_z = 2;

  //find required rpm for each motor to obtain the desired values
  rpm = Kinematics.getRPM(linear_vel_x, ang_vel_z);

  //Disable motor 1 if RPM is zero
 if (rpm.motor1 == 0) {
    digitalWrite(en_1, LOW);
  }
  else {
    // Enable motor 1 if RPM is not zero
    digitalWrite(en_1, HIGH);
  }

  // Disable motor 2 if RPM is zero
  if (rpm.motor2 == 0) {
    digitalWrite(en_2, LOW);
  }
  else {
    // Enable motor 2 if RPM is not zero
    digitalWrite(en_2, HIGH);
  }

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

  vel = Kinematics.getVelocities(motor1_feedback, motor2_feedback);

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
  pwm = Kinematics.getPWM(linear_vel_x, ang_vel_z);

  analogWrite(motor1_pin, abs(pwm.motor1));//pwm.motor1);
  analogWrite(motor2_pin, abs(pwm.motor2));//pwm.motor2);

  //debugging
  Serial.println(pwm.motor1);
  Serial.println(pwm.motor2);
  delay(1000);
}
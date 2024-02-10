#include <Arduino.h>
#include <DD_Kinematics.h>

#define MOTOR_MAX_RPM 100       // motor's maximum rpm
#define WHEEL_DIAMETER 0.5      // robot's wheel diameter expressed in meters
#define WHEEL_DIST 0.6          // distance between the front and back wheels
#define PWM_BITS 8              // microcontroller's PWM pin resolution. Arduino Mega 2560 is using 8 bits (0-255)

DD_Kinematics DD_Kinematics(MOTOR_MAX_RPM, WHEEL_DIAMETER, WHEEL_DIST, PWM_BITS);

void setup() 
{
  Serial.begin(57600);
}

void loop() 
{
  DD_Kinematics::output rpm;

  //Hardcode some velocities and angular velocity to test, all in m/s
  float linear_vel_x = 1;
  float linear_vel_y = 0;
  float ang_vel_z = 1;

  //find required rpm for each motor to obtain the desired values
  rpm = DD_Kinematics.getRPM(linear_vel_x, linear_vel_y, ang_vel_z);

  Serial.println("Left Motors: ");
  Serial.print(rpm.motor1);

  Serial.println("Right Motors: ");
  Serial.print(rpm.motor2);

  // Something like what we'd want to do for motor speed feedback. Demo is below to let the motors work
  // int motor1_feedback = rpm.encoder1;
  // int motor2_feedback = rpm.encoder2;

  int motor1_feedback = rpm.motor1;
  int motor2_feedback = rpm.motor2;

  DD_Kinematics::velocities vel;

  vel = DD_Kinematics.getVelocities(motor1_feedback, motor2_feedback);

  Serial.println("Velocity in X: ");
  Serial.print(vel.linear_x, 2);

  Serial.println("Velocity in Y: ");
  Serial.print(vel.linear_y, 2);

  Serial.println("Angular Velocity in Z: ");
  Serial.print(vel.ang_vel_z, 2);
  Serial.println("")

}

// put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }
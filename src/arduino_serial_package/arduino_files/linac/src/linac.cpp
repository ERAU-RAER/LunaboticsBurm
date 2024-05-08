#include <Arduino.h>
// #include <Linac_Kinematics.h>
#include <Twist_Decoder.h>

// Note: AlternatePin must be set to LOW before setting the other pin to HIGH! Both pins can never both be high!!!!

// Pin Defs

#define forwardPin_top 6     // Little Actuator pin for extending
#define backwardPin_top 7    // Little Actuator pin for retracting
#define forwardPin_bottom 47  // Big Actuators pin for extending
#define backwardPin_bottom 49 // Big Actuators pin for retracting

String command = "";
Twist daTwist = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float mm_per_sec = 15; // Define the needed variables
float max_vel = mm_per_sec / 1000;
float duty_cycle = 25;
float pwm_bits = 8;
float pwm_lim = duty_cycle / 100;
float pwm_res = (pow(2, pwm_bits) - 1);

void setup(){

  Serial.begin(9600); // Initialize serial communication at 9600 baud rate

  // Set Actuator pins to output
  pinMode(forwardPin_top, OUTPUT);
  pinMode(backwardPin_top, OUTPUT);
  pinMode(forwardPin_bottom, OUTPUT);
  pinMode(backwardPin_bottom, OUTPUT);
}

void loop(){
  // Check if serial data is available
  if (Serial.available()){
    while (Serial.available() > 0){ // Check if any characters are available
      char incomingChar = Serial.read(); // Read the incoming character

      if (incomingChar == '/'){ // Delimiter, check if it's the end of the message
        // Process the received command
        daTwist = parseTwist(command);

        // Reset the command string for the next message
        command = "";
      } 
      else{
        // Append the character to the command string
        command += incomingChar;
      }
    }

    sanityCheck(daTwist);
  }

    // Do big actuators first
    float vel = 0;
    float linear_vel_a = daTwist.linear_z; // set requested velocity and feed into functions
    if (linear_vel_a >= 0 && abs(linear_vel_a > max_vel)) { // Make sure that neither extension nor retraction will go above max speed
        vel = max_vel;
    } else if (linear_vel_a < 0 && abs(linear_vel_a > max_vel)) {
        vel = -max_vel;
    } else {
        vel = linear_vel_a;
    }
    float pwm_a = ((abs(vel / max_vel) * pwm_res) * pwm_lim);
    Serial.println(pwm_a);

    if (linear_vel_a > 0){ // Go up if requested velocity is above 0
      analogWrite(forwardPin_bottom, pwm_a);
      digitalWrite(backwardPin_bottom, LOW);
    }
    else if (linear_vel_a < 0){ // Go down if requested velocity is below 0
      analogWrite(forwardPin_bottom, LOW);
      digitalWrite(backwardPin_bottom, pwm_a);
    }
    else{ // Don't move if requested velocity is 0
      digitalWrite(forwardPin_bottom, LOW);
      digitalWrite(backwardPin_bottom, LOW);
    }
    
    // Now for the Little Actuator
    
    mm_per_sec = 10; // Same comments as the if statement above
    float linear_vel_b = daTwist.angular_y; // set requested velocity and feed into functions
    if (linear_vel_b >= 0 && abs(linear_vel_b > max_vel)) { // Make sure that neither extension nor retraction will go above max speed
        vel = max_vel;
    } else if (linear_vel_b < 0 && abs(linear_vel_b > max_vel)) {
        vel = -max_vel;
    } else {
        vel = linear_vel_b;
    }
    float pwm_b = ((abs(vel / max_vel) * pwm_res) * pwm_lim);
    Serial.println(pwm_b);

    if (linear_vel_b > 0){
      analogWrite(forwardPin_top, pwm_b);
      digitalWrite(backwardPin_top, LOW);
    }
    else if (linear_vel_b < 0){
      analogWrite(forwardPin_top, LOW);
      digitalWrite(backwardPin_top, pwm_b);
    }
    else{
      digitalWrite(forwardPin_top, LOW);
      digitalWrite(backwardPin_top, LOW);
    }
}
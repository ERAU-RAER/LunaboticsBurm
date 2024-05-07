#include <Arduino.h>
#include <Linac_Kinematics.h>
#include <Twist_Decoder.h>

// Note: AlternatePin must be set to LOW before setting the other pin to HIGH! Both pins can never both be high!!!!

// Pin Defs

#define forwardPin_top 42     // Little Actuator pin for extending
#define backwardPin_top 43    // Little Actuator pin for retracting
#define forwardPin_bottom 47  // Big Actuators pin for extending
#define backwardPin_bottom 49 // Big Actuators pin for retracting

String command = "";
Twist daTwist = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float mm_per_sec = 15; // Define the needed variables
int duty_cycle = 25;
int pwm_bits = 8;

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

    // Do big actuators first

    float linear_vel_a = daTwist.linear_z; // set requested velocity and feed into functions
    output pwm = getPWM(linear_vel_a);
    int pwm_a = pwm.actuator_n;

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

    float linear_vel_b = daTwist.angular_y;
    pwm = getPWM(linear_vel_b);
    int pwm_b = pwm.actuator_n;

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
}
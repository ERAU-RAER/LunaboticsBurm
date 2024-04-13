#include <Arduino.h>
#include <Twist_Decoder.h>

// Pin Defs

#define forwardPin_top 42     // Little Actuator pin for extending
#define backwardPin_top 43    // Little Actuator pin for retracting
#define forwardPin_bottom 47  // Big Actuators pin for extending
#define backwardPin_bottom 49 // Big Actuators pin for retracting

String command = "";
Twist daTwist = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

void setup(){

  Serial.begin(9600); // Initialize serial communication at 9600 baud rate

  // Set Actuator pins to output
  pinMode(forwardPin_top, OUTPUT);
  pinMode(backwardPin_top, OUTPUT);
  pinMode(forwardPin_bottom, OUTPUT);
  pinMode(backwardPin_bottom, OUTPUT);
}

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

    if (daTwist.linear_z == 0.0){
      // Note: AlternatePin must be set to LOW before setting the other pin to HIGH! Both pins can never both be high
      digitalWrite(backwardPin_bottom, LOW);
      digitalWrite(forwardPin_bottom, LOW);
    } 
    else if (daTwist.linear_z > 0.0){
      // Note: AlternatePin must be set to LOW before setting the other pin to HIGH! Both pins can never both be high
      digitalWrite(backwardPin_bottom, LOW);
      digitalWrite(forwardPin_bottom, HIGH);
    } 
    else if (daTwist.linear_z < 0.0){
      // Note: AlternatePin must be set to LOW before setting the other pin to
      // HIGH! Both pins can never both be high
      digitalWrite(forwardPin_bottom, LOW);
      digitalWrite(backwardPin_bottom, HIGH);
    }
    
    if (daTwist.angular_y == 0){
      digitalWrite(backwardPin_top, LOW);
      digitalWrite(forwardPin_top, LOW);
    } 
    else if (daTwist.angular_y > 0.0){
      digitalWrite(backwardPin_top, LOW);
      digitalWrite(forwardPin_top, HIGH);
    } 
    else if (daTwist.angular_y < 0.0){
      digitalWrite(forwardPin_top, LOW);
      digitalWrite(backwardPin_top, HIGH);
    }
  }
}

// Make variables that are something like input * 255, then lin_a_move = lin_ex - lin_re, if lin_a <0 pin high, if lin_a > 0 pin low
#include <Arduino.h>
#include <Twist_Decoder.h>

// Encoder Variables //

#define forwardPin_top 42     // First pin for moving forward
#define backwardPin_top 43    // First pin for moving backward
#define forwardPin_bottom 47  // First pin for moving forward
#define backwardPin_bottom 49 // First pin for moving backward
#define vibrationPin 24       // Pin for vibration motor

String command = "";
Twist daTwist = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
unsigned long lastMessage = 0;

// const int hallPinA = 2;   // Hall sensor A pin
// const int hallPinB = 3;   // Hall sensor B pin
// const int hallPinC = 18;
// const int hallPinD = 19;
// int hallA = 0;            // Pin for hall sensor A
// int hallB = 0;            // Pin for hall sensor B
// int hallC = 0;            // Pin for hall sensor C
// int hallD = 0;            // Pin for hall sensor D

// int hallA_old = 0;        // Old pin state for hall sensor A
// int hallB_old = 0;        // Old pin state for hall sensor B
// int hallC_old = 0;        // Old pin state for hall sensor C
// int hallD_old = 0;        // Old pin state for hall sensor D
// float ppmm = 17.4;        // Pulses per mm travelled
// int encoderCount = 0;     // Position of linear actuator in encoder ticks
// int encoderCount_old = 0; // Old encoder count
// unsigned long encoderTimer = 0;
// int encoderPeriod = 250;  // Period for publishing encoder

void setup(){
  Serial.begin(115200); // Initialize serial communication at 9600 baud rate

  // Set Actuator pins to output
  pinMode(forwardPin_top, OUTPUT);
  pinMode(backwardPin_top, OUTPUT);
  pinMode(forwardPin_bottom, OUTPUT);
  pinMode(backwardPin_bottom, OUTPUT);

  // Set encoder pins to input pullup
  // pinMode(hallPinA, INPUT_PULLUP);
  // pinMode(hallPinB, INPUT_PULLUP);
  // pinMode(hallPinC, INPUT_PULLUP);
  // pinMode(hallPinD, INPUT_PULLUP);

  // Set up interrupts for encoder
  // attachInterrupt(digitalPinToInterrupt(hallPinA), updateLinAccPos, CHANGE);
  // attachInterrupt(digitalPinToInterrupt(hallPinB), updateLinAccPos, CHANGE);
  // attachInterrupt(digitalPinToInterrupt(hallPinC), updateLinAccPos1, CHANGE);
  // attachInterrupt(digitalPinToInterrupt(hallPinD), updateLinAccPos1, CHANGE);

  // Print a message to indicate the setup is complete
  // Serial.println("Setup complete. Ready to receive commands.");
}

void loop(){
  // Check if serial data is available
  if (Serial.available()){
    while (Serial.available() > 0){ // Check if any characters are available
      char incomingChar = Serial.read(); // Read the incoming character

      if (incomingChar == '/'){ // Delimiter, check if it's the end of the message
        // Process the received command
        daTwist = parseTwist(command);
        lastMessage = millis();


        // Reset the command string for the next message
        command = "";
      } 
      else{
        // Append the character to the command string
        command += incomingChar;
      }
    }

    if(lastMessage < (millis() - 3000)) {
    daTwist = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
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
    if (daTwist.angular_x > 0){
      digitalWrite(vibrationPin,HIGH);
    }
    else{
      digitalWrite(vibrationPin,LOW);
    }
  }
}

//   // Check encoder publishing conditions
//   if (millis() - encoderTimer > encoderPeriod && encoderCount_old !=
//   encoderCount) {Serial.println("Encoder Count: " + String(encoderCount));
//     encoderCount_old = encoderCount;
//     encoderTimer = millis();
//   }
// }

// void updateLinAccPos() {
//   // Read new hall sensor values
//   hallA = !digitalRead(hallPinA);
//   hallB = !digitalRead(hallPinB);
//   if (hallA != hallA_old) {
//   if (hallA == HIGH && hallB == LOW) { // Logic for extension
//   encoderCount_old = encoderCount;
//   encoderCount++;
//   }

//   } else if (hallB != hallB_old) { // Logic for retraction
//   if (hallB == HIGH && hallA == LOW) {
//   encoderCount_old = encoderCount;
//   encoderCount--;
//   }
//   }

//   // Store old hall sensor values

//   hallA_old = hallA;
//   hallB_old = hallB;

//     // Check encoder publishing conditions
//     if (millis() - encoderTimer > encoderPeriod && encoderCount_old !=
//     encoderCount) {Serial.println("Encoder Count: " + String(encoderCount));
//       encoderCount_old = encoderCount;
//       encoderTimer = millis();
//     }
// }

// void updateLinAccPos1() {
//   // Read new hall sensor values
//   hallC = !digitalRead(hallPinC);
//   hallD = !digitalRead(hallPinD);
//   if (hallC != hallC_old) {
//   if (hallC == HIGH && hallD == LOW) { // Logic for extension
//   encoderCount_old = encoderCount;
//   encoderCount++;
//   }

//   } else if (hallD != hallD_old) { // Logic for retraction
//   if (hallD == HIGH && hallC == LOW) {
//   encoderCount_old = encoderCount;
//   encoderCount--;
//   }
//   }

//   // Store old hall sensor values

//   hallC_old = hallC;
//   hallD_old = hallD;

// }

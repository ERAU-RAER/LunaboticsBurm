#include <Arduino.h>
// Encoder Variables //

const int forwardPin_top = 4;    // First pin for moving forward
const int backwardPin_top = 5;   // First pin for moving backward
const int forwardPin_middle = 6;    // First pin for moving forward
const int backwardPin_middle = 7;   // First pin for moving backward

const int hallPinA = 2;   // Hall sensor A pin
const int hallPinB = 3;   // Hall sensor B pin
const int hallPinC = 18;
const int hallPinD = 19;
int hallA = 0;            // Pin for hall sensor A
int hallB = 0;            // Pin for hall sensor B
int hallC = 0;            // Pin for hall sensor C
int hallD = 0;            // Pin for hall sensor D

int hallA_old = 0;        // Old pin state for hall sensor A
int hallB_old = 0;        // Old pin state for hall sensor B
int hallC_old = 0;        // Old pin state for hall sensor C
int hallD_old = 0;        // Old pin state for hall sensor D
float ppmm = 17.4;        // Pulses per mm travelled
int encoderCount = 0;     // Position of linear actuator in encoder ticks
int encoderCount_old = 0; // Old encoder count
unsigned long encoderTimer = 0;
int encoderPeriod = 250;  // Period for publishing encoder

void setup() {
  Serial.begin(9600);  // Initialize serial communication at 9600 baud rate

  // Set Actuator pins to output
  pinMode(forwardPin_top, OUTPUT);
  pinMode(backwardPin_top, OUTPUT);
  pinMode(forwardPin_middle,OUTPUT);
  pinMode(backwardPin_middle,OUTPUT);
  
  // Set encoder pins to input pullup
  pinMode(hallPinA, INPUT_PULLUP);
  pinMode(hallPinB, INPUT_PULLUP);
  pinMode(hallPinC, INPUT_PULLUP);
  pinMode(hallPinD, INPUT_PULLUP);  

  // Set up interrupts for encoder
  attachInterrupt(digitalPinToInterrupt(hallPinA), updateLinAccPos, CHANGE);
  attachInterrupt(digitalPinToInterrupt(hallPinB), updateLinAccPos, CHANGE);
  attachInterrupt(digitalPinToInterrupt(hallPinC), updateLinAccPos1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(hallPinD), updateLinAccPos1, CHANGE);

  // Print a message to indicate the setup is complete
  // Serial.println("Setup complete. Ready to receive commands.");
}

void loop() {
  // Check if serial data is available
  if (Serial.available()) {
    char command = Serial.read();
    
    // Move forward if 'w' is received
    if (command == 'w') {
      digitalWrite(forwardPin_top, HIGH);
      digitalWrite(forwardPin_middle, LOW);
      digitalWrite(backwardPin_top, LOW);
      digitalWrite(backwardPin_middle, LOW);
      Serial.println("Top actuator Moving forward.");
    } 
    // Move backward if 's' is received
    else if (command == 's') {
      digitalWrite(forwardPin_top, LOW);
      digitalWrite(forwardPin_middle, LOW);    
      digitalWrite(backwardPin_top, HIGH);
      digitalWrite(backwardPin_middle, LOW);
      Serial.println(" Top actuator Moving backward.");
    }
    else if (command == 'd'){
      digitalWrite(forwardPin_top, LOW);
      digitalWrite(forwardPin_middle, HIGH);
      digitalWrite(backwardPin_top, LOW);
      digitalWrite(backwardPin_middle, LOW);
      Serial.println(" Middle actuator and Bottom actuator Moving forward.");                  
    }
    else if (command == 'q'){
      digitalWrite(forwardPin_top, LOW);
      digitalWrite(forwardPin_middle, LOW);
      digitalWrite(backwardPin_top, LOW);
      digitalWrite(backwardPin_middle, HIGH);
      Serial.println(" Middle actuator and Bottom actuator Moving backward.");                  
    }    
    else if (command == 'r'){
      digitalWrite(forwardPin_top, HIGH);
      digitalWrite(forwardPin_middle, HIGH);
      digitalWrite(backwardPin_top, LOW);
      digitalWrite(backwardPin_middle, LOW);
      Serial.println(" Top, Middle, and Bottom actuator Moving forward.");                  
    }
    else if (command == 'f'){
      digitalWrite(forwardPin_top, LOW);
      digitalWrite(forwardPin_middle, LOW);
      digitalWrite(backwardPin_top, HIGH);
      digitalWrite(backwardPin_middle, HIGH);
      Serial.println(" Top, Middle, and Bottom actuator Moving backward.");                  
    }        
    // Stop if 'a' is received
    else if (command == 'a') {
      digitalWrite(forwardPin_top, LOW);
      digitalWrite(forwardPin_middle, LOW);      
      digitalWrite(backwardPin_top, LOW);
      digitalWrite(backwardPin_middle, LOW);     
      Serial.println("Stop command received.");
    }
  }

  // Check encoder publishing conditions
  if (millis() - encoderTimer > encoderPeriod && encoderCount_old != encoderCount) {
    Serial.println("Encoder Count: " + String(encoderCount));
    encoderCount_old = encoderCount;
    encoderTimer = millis();
  }
}

void updateLinAccPos() {
  // Read new hall sensor values
  hallA = !digitalRead(hallPinA);
  hallB = !digitalRead(hallPinB);
  if (hallA != hallA_old) {
  if (hallA == HIGH && hallB == LOW) { // Logic for extension
  encoderCount_old = encoderCount;
  encoderCount++;
  }

  } else if (hallB != hallB_old) { // Logic for retraction
  if (hallB == HIGH && hallA == LOW) {
  encoderCount_old = encoderCount;
  encoderCount--;
  }
  }

  // Store old hall sensor values

  hallA_old = hallA;
  hallB_old = hallB;

    // Check encoder publishing conditions
    if (millis() - encoderTimer > encoderPeriod && encoderCount_old != encoderCount) {
      Serial.println("Encoder Count: " + String(encoderCount));
      encoderCount_old = encoderCount;
      encoderTimer = millis();
    }
}

void updateLinAccPos1() {
  // Read new hall sensor values
  hallC = !digitalRead(hallPinC);
  hallD = !digitalRead(hallPinD);
  if (hallC != hallC_old) {
  if (hallC == HIGH && hallD == LOW) { // Logic for extension
  encoderCount_old = encoderCount;
  encoderCount++;
  }

  } else if (hallD != hallD_old) { // Logic for retraction
  if (hallD == HIGH && hallC == LOW) {
  encoderCount_old = encoderCount;
  encoderCount--;
  }
  }

  // Store old hall sensor values

  hallC_old = hallC;
  hallD_old = hallD;

}
  
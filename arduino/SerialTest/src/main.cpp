#include <Arduino.h>

String command = "";

void processCommand(String);

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  while (Serial.available() > 0) { // Check if any characters are available
    char incomingChar = Serial.read(); // Read the incoming character
    
    if (incomingChar == '.') { // Check if it's the end of the message
      // Process the received command
      processCommand(command);
      
      // Reset the command string for the next message
      command = "";
    } else {
      // Append the character to the command string
      command += incomingChar;
    }
  }
}

void processCommand(String cmd) {
  // Check the received command and take appropriate action
  if (cmd == "ON") {
    digitalWrite(13, HIGH);
  } else if (cmd == "OFF") {
    digitalWrite(13, LOW);
  }
}

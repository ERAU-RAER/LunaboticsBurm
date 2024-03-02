#include <Arduino.h>
String command;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  if (Serial.available() >= 2) { // Check if at least 2 bytes are available
    char firstChar = Serial.read(); // Read the first character
    char secondChar = Serial.read(); // Read the second character

    if (firstChar == 'O' && secondChar == 'N') { // Check if it's "ON"
      // Do something when "ON" is received
      digitalWrite(13, HIGH);
    }
    if (firstChar == 'O' && secondChar == 'F') { // Check if it's "ON"
      // Do something when "ON" is received
      digitalWrite(13, LOW);
    }
  }
}
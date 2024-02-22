#include "Arduino.h"
const int ENR = 7;
const int ENL = 8;
// byte msgOut[10]; //use me later
 
//Prototypes
void msgParse();

//Run me :)

void setup() {
  Serial.begin(9600);
  Serial.println("Can you hear me? Deploying...");
}

void loop() {
  msgParse();
}

void msgParse() {

  static byte tmpMsg[3];  //use me later

  if (Serial.available() > 0) {
    // read the incoming byte:
    Serial.readBytes(tmpMsg, 3);

    // say what you got:
    // Serial.println("I received: ");
    // for (int i = 0; i < 3; i++) {
    //   Serial.println(tmpMsg[i]);
    // }

    if (tmpMsg[0] == 49) {
      pinMode(ENL, OUTPUT);
      Serial.println("LEFT ON");
    }

    else {
      pinMode(ENL, INPUT);
      Serial.println("LEFT OFF");
    }
    if (tmpMsg[1] == 49) {
      pinMode(ENR, OUTPUT);
      Serial.println("RIGHT ON");
    }

    else {
      pinMode(ENR, INPUT);
      Serial.println("RIGHT OFF");
    }
  }
}

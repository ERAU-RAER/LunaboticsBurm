#include <AVR_PWM.h>

int PWM_Pin = 11;
int dirPin = 12;
int en;
float dutyCycle = 0.0f;
float speed = 0.5f; //in RPS
float rpm;
float freq = 244.14f;
float msg; // for incoming serial data

//Declare motors
AVR_PWM* PWM_Instance = new AVR_PWM(PWM_Pin, freq, dutyCycle);

//function prototypes
void setMotorSpeed(float);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(12, OUTPUT);

  digitalWrite(12, HIGH);

}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    Serial.println("Set Speed (RPS):");
    msg = Serial.readString().toFloat();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(msg);
    
    setMotorSpeed(msg);
  }
}

void setMotorSpeed(float s){
  d=s/rpm;
  PWM_Instance->setPWM(PWM_Pin, freq, d);
}

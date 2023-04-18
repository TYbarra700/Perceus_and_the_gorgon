#include <Servo.h>

Servo serv1;
const int buttonPin = 9;

void setup() {
  serv1.attach(180);
  pinMode(buttonPin, INPUT);

}

void loop() {
  if(digitalRead(buttonPin) == HIGH){
    Serial.print("button on");
  }
}

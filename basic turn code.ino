#include <Servo.h>

Servo serv1;
const int lightPin = 4;
const int buttonPin = 2;
bool turnt;

void setup() {
  serv1.attach(3);
  pinMode(lightPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  turnt = false;
  serv1.write(0);

}

void loop() {
  if (digitalRead(buttonPin) == HIGH){
    if (turnt == false) {
      digitalWrite(lightPin, HIGH);
      for(int turn = 0; turn < 180; turn+=1){
        serv1.write(turn);
        delay(10);
        }
        serv1.write(180);
        turnt = true;
      }    
    } else {
      if(turnt = false) {
        digitalWrite(lightPin, LOW);
        serv1.write(0);
      } else {
        digitalWrite(lightPin, LOW);
      }
    }

}

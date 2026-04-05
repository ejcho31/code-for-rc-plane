#include <Servo.h>

int xPin = 1;
int yPin = 2;
int serv = 3;

Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  servo.attach(serv);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rawX = analogRead(xPin);
  int rawY = analogRead(yPin);
  int mappedX = map(rawX,0,1023,0,180);
  int mappedY = map(rawY,0,1023,0,180);
  servo.write(mappedY);

}

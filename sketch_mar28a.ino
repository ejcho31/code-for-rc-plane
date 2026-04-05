
int xPin = 1;
int yPin = 2;
int zButton = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(zButton, INPUT);
  digitalWrite(zButton, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rawX = analogRead(xPin);
  int rawY = analogRead(yPin);
  int mappedX = map(rawX,0,1023,0,100);
  int mappedY = map(rawY,0,1023,0,100);
  Serial.print("X value: ");
  Serial.println(mappedX);
  Serial.print("Y value: ");
  Serial.println(mappedY);
}

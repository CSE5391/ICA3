int ledPin = 6;
int lightVal = 0;

void setup() {
  // put your setup code here, to run once:


}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin, lightVal);
  lightVal += 10;
  if(lightVal > 255) lightVal = 0;
  delay(20);
}

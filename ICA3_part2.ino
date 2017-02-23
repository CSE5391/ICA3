int ledPin_High = 6;
int ledPin_Low = 5;
int lightVal_High = 250;
int lightVal_Low = 10;

void setup() {
}

void loop() {
  analogWrite(ledPin_High, lightVal_High);
  analogWrite(ledPin_Low, lightVal_Low);
  delay(20);
}

int ledPin = 5;
int potvalue = 0;
int potpin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potvalue = analogRead(potpin);
  Serial.println("Potentiometer value:");
  Serial.println(potvalue);
  
  potvalue = map(potvalue, 0,1023, 0, 255);
  Serial.println("Mapped value: ");
  Serial.println(potvalue);
  
  analogWrite(ledPin, potvalue);
  delay(1000);
}

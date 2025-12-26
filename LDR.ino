#define ledPin 3
void setup() {
// put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
int light = analogRead(A0);
Serial.println("Light:");
Serial.println(light);
delay(50);
if (light > 500) {
digitalWrite(ledPin, LOW);
}
else {
digitalWrite(ledPin, HIGH);
}
}
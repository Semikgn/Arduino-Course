//HC-SR04
#define trigPin 7
#define echoPin 6
#define buzzerPin 8

long duration, distance, measure;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  delay(50);

  if(distance >= 50 || distance < 0)
  measure = 0;
  else 
  measure = distance;
Serial.println("Distance: ");
Serial.println(measure);

tone(buzzerPin, 448);
delay(measure * 10);
noTone(buzzerPin);
delay(measure * 10);
}

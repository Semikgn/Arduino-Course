int ledPin = 8;
int lm35pin = A0;
int buzzer = 9;

int temp_ADC = 0;
int temp_real;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  temp_ADC = analogRead(lm35pin);
  Serial.println("Temp. ADC value: ");
  Serial.println(temp_ADC);

  temp_real = temp_ADC/2;
  Serial.println("Temp. Real value: ");
  Serial.println(temp_real);
  delay(1000);
  
  if(temp_real >=30){
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzer, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, LOW);
  }
}

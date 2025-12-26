//Arduino butonlar ile çalışırken oluşan debounce efektini nasıl engelleriz?
const int switchPin = 2;
const int ledPin = 13;
//Buton durumu led durumunu kontrol edicek
int switchState = 0;
int lastSwitchState = LOW;
//Delay süresini ölçerek butona mı basıldı yoksa debounce mu oluyor bunu göreceğiz
long lastDebounceTime = 0;
long debounceDelay = 50;

//Pin atamaları
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
}
//Kod
void loop() {
  //Digital pinden veriyi al 
  int readInput = digitalRead(switchPin);
  //Durum son duruma eşit değilse süre tut
  if (readInput != lastSwitchState)
  {
    lastDebounceTime = millis();
  }
  //Tutulan süre 50ms üstündeyse durumu yeni durum olarak kabul ederiz.
  if ((millis() - lastDebounceTime) > debounceDelay)
  {
    switchState = readInput;
  }
  //Bir sonraki kontrolü yapabilmek için son durumu kaydederiz
  lastSwitchState = readInput;
  //LED AÇ KAPA
  if (switchState == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  } 
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
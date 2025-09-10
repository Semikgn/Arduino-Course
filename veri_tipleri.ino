int tamsayi = 4;
float ondaliksayi = 3.6;
double uzunondaliksayi = 5.234567;
char karakter = 'h';
bool dogruluk = true;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Tamsayi ifadesi: ");
  Serial.println(tamsayi);
  delay(500);
  Serial.print("OndalikSayi ifadesi: ");
  Serial.println(ondaliksayi);
  delay(500);
  Serial.print("Uzun ondalık sayı ifadesi: ");
  Serial.println(uzunondaliksayi, 6);
  delay(500);
  Serial.print("Karakter ifadesi: ");
  Serial.println(karakter);
  delay(500);
  Serial.print("Doğruluk ifadesi: ");
  Serial.println(dogruluk);
  delay(500);
}

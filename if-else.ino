int armut = 5, elma = 5, kivi = 2;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if((armut == elma)||(armut == kivi))
  {
    Serial.println('esittir');
  }
  else if ((armut > elma )&&(armut != kivi))
  {
    Serial.println('armut buyuk elma');
  }
  else
  {
    Serial.println('elmalar buyuk');
  }
  /*
  >: buyuktur
  <: kucuktur
  ==: esittir
  !=: esit degildir
  >=: büyük esit
  <=: kücük esit
  &&: ve
  ||: veya
  */
  delay(1000);
}

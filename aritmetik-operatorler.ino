int a = 5, b = 3, c= 2, toplam, cikarma, carpma, bolme;
float d = 3.53, e = 2.94, floatoplam, floatcarpma, floatbolme;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  /*
  Serial.println(a+b);
  Serial.println(a-b); 
  Serial.println(a*b);
  Serial.println(a/b);
  */
  /*toplama = a+b;
  Serial.println(toplama);*/
  floatoplam = d+e;
  floatcarpma = d*e;
  floatbolme = d/e;
  Serial.println(floatoplam);
  Serial.println(floatcarpma);
  Serial.println(floatbolme);

}

int ledPin=13;
void setup()
{
  pinMode(13,OUTPUT);
}
void loop()
{
  int i;
  for(int i=0;i<=255;i++)
  {
    analogWrite(13,i);
    delay(3000);
  }
  for(int i=255;i>=0;i--)
  {
    analogWrite(13,i);
    delay(3000);
  }
}

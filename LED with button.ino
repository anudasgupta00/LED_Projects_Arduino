int ledpin=10;
int button=11;
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, INPUT);
}
void loop()
{
  if(digitalRead(11)==HIGH)
  {
    digitalWrite(10, HIGH);
  }
}


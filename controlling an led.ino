controlling-an-led
==================
void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  
  
}
void loop()
{
  if(Serial.available())
  {
    int theInput = Serial.parseInt();
    if (theInput == 9 )
    {
      digitalWrite(13,HIGH);
  }
  if ( theInput == 6 )
  {
    digitalWrite(13,LOW);
  }
  delay(100);
  }
}

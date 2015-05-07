/*
Reading Pushbutton and IF statement

DigitalRead
DigitalWrite
IF statement

Setup:
Pushbutton, with a pulldown resistor, connected to pin 2
*/

void setup()
{
  pinMode(2,INPUT); //configure pin 2 as an input
  pinMode(13,OUTPUT); //configure pin 13 as an output
}

void loop()
{
  if(digitalRead(2) == HIGH)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}

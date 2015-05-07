/*
Reading Pushbutton

DigitalRead
DigitalWrite

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
  digitalWrite(13,digitalRead(2));
  //on pin 13, output the value read on pin 2
}

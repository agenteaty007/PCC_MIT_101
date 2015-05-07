/*
Blink LED on board

Digital output
Delay (pausing)
Variables (integer)
*/

int pause = 1000; //variable used for the delay() function

void setup()
{
  pinMode(13,OUTPUT);//set LED on pin 13 as an OUTPUT pin
}

void loop()
{
  digitalWrite(13,HIGH);//output 5V on pin 13
  delay(pause);//pause for "pause" milliseconds
  digitalWrite(13,LOW);//output 0V on pin 13
  delay(pause);//pause for "pause" milliseconds
}

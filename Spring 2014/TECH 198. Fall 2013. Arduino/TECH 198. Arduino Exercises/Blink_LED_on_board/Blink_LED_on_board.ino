/*
Blink LED on board
Digital output
Delay (pausing)
*/

void setup()
{
  pinMode(13,OUTPUT);//set LED on pin 13 as an OUTPUT pin
}

void loop()
{
  digitalWrite(13,HIGH);//output 5V on pin 13
  delay(1000);//pause for 1000 ms, which is 1 second
  digitalWrite(13,LOW);//output 0V on pin 13
  delay(1000);//pause for 1000 ms, which is 1 second
}

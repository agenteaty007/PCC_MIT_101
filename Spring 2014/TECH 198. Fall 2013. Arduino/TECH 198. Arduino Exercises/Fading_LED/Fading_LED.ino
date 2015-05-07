/*
Fading LED

AnalogWrite
Use of FOR loop
Variables (integer)

Setup:
LED on pin 9
*/

int time = 10; //variable used for delay() function

void setup()
{
  pinMode(9,OUTPUT); //configure pin 9 as an OUTPUT
}

void loop()
{
  for(int i = 0; i < 255; i++)
  {
    //i increases by 1 unit until it reaches 255
    analogWrite(9,i); //on pin 9, output "i"
    delay(time); //pause for "time" milliseconds
  }
  for(int i = 255; i > 0; i--)
  {
    //i decreases by 1 unit until it reaches 0
    analogWrite(9,i);
    delay(time);
  }
}

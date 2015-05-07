/*
Reading Potentiometer and LED

AnalogRead
AnalogWrite
Mathematical operators

Setup:
Potentiometer on pin A0
LED on pin 9
*/

void setup()
{
  pinMode(9,OUTPUT);
}

void loop()
{
  int reading = (analogRead(A0)/4);
  //left side: declare variable "reading"
  //right side: read analog value on pin A0 and divide by 4
  //assign right side result to "reading" variable
  
  analogWrite(9,reading); //on pin 9, output "reading"
  
  delay(100); //pause for 100 ms = 0.1 seconds
  //the system will update the "reading" and LED 10 times per seoond
}

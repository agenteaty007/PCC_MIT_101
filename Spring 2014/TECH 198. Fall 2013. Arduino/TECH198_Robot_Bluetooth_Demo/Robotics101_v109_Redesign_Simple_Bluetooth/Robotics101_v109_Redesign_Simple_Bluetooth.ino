#define M1A 3
#define M1B 5
#define M2A 6
#define M2B 9

int speedStraight = 255;
int speedTurn = 150;

int motorPin[4]={3,5,6,9};

void motor(int motorSelect, int motorDirection, int motorSpeed)
{
  if(motorSelect == 0)
  {
    if(motorDirection == 0)
    {
      digitalWrite(motorPin[0],0);
      digitalWrite(motorPin[1],0);
      delay(20);
      analogWrite(motorPin[0],motorSpeed);
    }
    else if(motorDirection == 1)
    {
      digitalWrite(motorPin[0],0);
      digitalWrite(motorPin[1],0);
      delay(20);
      analogWrite(motorPin[1],motorSpeed);
    }
  }
  else if(motorSelect == 1)
  {
    if(motorDirection == 0)
    {
      digitalWrite(motorPin[2],0);
      digitalWrite(motorPin[3],0);
      delay(50);
      analogWrite(motorPin[2],motorSpeed);
    }
    else if(motorDirection == 1)
    {
      digitalWrite(motorPin[2],0);
      digitalWrite(motorPin[3],0);
      delay(50);
      analogWrite(motorPin[3],motorSpeed);
    }
  }
}

void manualControlBluetooth(char command)
{
  if(command == 'F')
  {
    //Forward
    motor(0,1,speedStraight);
    motor(1,1,speedStraight);
  }
  else if(command == 'B')
  {
    //Back
    motor(0,0,speedStraight);
    motor(1,0,speedStraight);
  }
  else if(command == 'L')
  {
    //Left
    motor(0,0,speedTurn);
    motor(1,1,speedTurn);
  }
  else if(command == 'R')
  {
    //Right
    motor(0,1,speedTurn);
    motor(1,0,speedTurn);
  }
  else if(command == 'I')
  {
    //Forward Right
    motor(0,1,speedStraight);
    motor(1,1,speedTurn);
  }
  else if(command == 'G')
  {
    //Forward Left
    motor(0,1,speedTurn);
    motor(1,1,speedStraight);
  }
  else if(command == 'J')
  {
    //Back Right
    motor(0,0,speedStraight);
    motor(1,0,speedTurn);
  }
  else if(command == 'H')
  {
    //Back Left
    motor(0,0,speedTurn);
    motor(1,0,speedStraight);
  }
  else if(command == 'S')
  {
    //Stop
    motor(0,0,0);
    motor(1,0,0);
  }
  else
  {
    //Stop
    motor(0,0,0);
    motor(1,0,0);
  }
}

void setup()
{
  for(int i = 0; i < 4; i++)
  {
    pinMode(motorPin[i],OUTPUT);
  }
  
  Serial.begin(115200);
  
  motor(0,0,0);
  motor(1,0,0);
  delay(100);
}

void loop()
{
  if(Serial.available() > 0)
  {
    char reading = Serial.read();
    manualControlBluetooth(reading);
    delay(20);
  }
}

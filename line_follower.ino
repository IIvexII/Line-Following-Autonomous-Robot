#include "Motor.h"
#include "Sensor.h"

Sensor sensor(3);
Motor motor(9, 8, 0);

void setup() 
{
   Serial.begin(9600);
}
void loop()
{
  Serial.println(digitalRead(3));
  
  if (sensor.getValue() == ON_BLACK_LINE)
  {
   motor.farward(); 
  }
  else
  {
    motor.backward();
  }
}

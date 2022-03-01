#include "Motor.h"
#include "Sensor.h"

cout << "Hello";

Sensor leftSensor(2), middleSensor(3), rightSensor(4);
Motor leftMotor(7, 8, 6);
Motor rightMotor(13, 12 , 11);

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  leftMotor.setSpeed(150);
  leftMotor.farward();
  rightMotor.setSpeed(150);
  rightMotor.farward();
//  int sp = 150;
//  int leftSpeed = 150;
//  int rightSpeed = 150;
//  leftMotor.farward();
//  rightMotor.farward();
//  bool leftV = leftSensor.getValue();
//  bool centerV = middleSensor.getValue();
//  bool rightV = rightSensor.getValue();
//
//  if (leftV == 1 && centerV == 0 && rightV == 1)
//  {
//    Serial.println("farward");
//    leftMotor.setSpeed(leftSpeed);
//    rightMotor.setSpeed(rightSpeed);
//    // Move farward
//    rightMotor.farward();
//    leftMotor.farward();
//  }
//  else if (leftV == 0 && centerV == 0 && rightV == 0)
//  {
//    Serial.println("Stop all white");
//    // Stop the car
//    leftMotor.setSpeed(0);
//    rightMotor.setSpeed(0);
//  }
//  else if (leftV == 1 && centerV == 1 && rightV == 1)
//  {
//    Serial.println("Stop all black");
//    // Stop the car
//    leftMotor.setSpeed(0);
//    rightMotor.setSpeed(0);
//  }
//  else if (leftV == 0 && centerV == 0 && rightV == 1)
//  {
//    Serial.println("Left1");
//    // Rotate left
//    leftMotor.setSpeed(0);
//    rightMotor.setSpeed(rightSpeed);
//  }
//  else if (leftV == 1 && centerV == 0 && rightV == 0)
//  {
//    Serial.println("right");
//    // Rotate right
//    leftMotor.setSpeed(leftSpeed);
//    rightMotor.setSpeed(0);
//  }
//  else if (leftV == 0 && centerV == 1 && rightV == 1)
//  {
//    Serial.println("Left2");
//    // Rotate left
//    leftMotor.setSpeed(0);
//    rightMotor.setSpeed(rightSpeed);
//  }
//  else if (leftV == 1 && centerV == 1 && rightV == 0)
//  {
//    Serial.println("Right2");
//    // Rotate right
//    leftMotor.setSpeed(leftSpeed);
//    rightMotor.setSpeed(0);
//  }
}

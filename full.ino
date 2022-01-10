/* 
  VISHWAKARMA INSTITUTE OF TECHNOLOGY , PUNE
  FINAL MAJOR PROJECT 
  GUIDE :- M.R.KHODKE
  
  BY -
       VARAD DHAT
*/

//INCLUDE LIBRARY FOR ACCESSING SERVO MOTORS
#include<Servo.h>

//motors PWM PINS
int m1 = 8;
int m2 = 9;
int m3 = 6;
int m4 = 7;

//Direction
int d1 = 32;
int d2 = 34;
int d3 = 28;
int d4 = 30;

//FOR SWITCH CASE
char function = 'a';

//VARIABLES FOR CHANGING PWM OF MOTOR1 , MOTOR2 , MOTOR3 , MOTOR4
int pM1 , pM2 , pM3, pM4;

//DEFINE Servo NAME
Servo s1;
Servo s2;
Servo s3;
Servo s4;


void setup()
{
  //FOR PRINTING COMMANDS ON SERIAL  MONITOR
  Serial.begin(115200);
  //FOR RECEIVING COMMANDS THROUGH BT
  Serial3.begin(9800);

  //Motors pwm
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4 , OUTPUT);

  //Direction
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);

  //Servo
  s1.attach(53);
  s2.attach(51);
  s3.attach(49);
  s4.attach(47);


}

void loop()
{
                                                                                                                                            
  if (Serial3.available() > 0)
  {
    function = Serial3.read();
    
    Serial.println(function);
  }
//delay(1000);
  switch (function)
  {
    case 'F' :
      Forward();
      break;

    case 'B' :
      Backward();
      break;

    case 'R' :
      Right();
      break;

    case 'L' :
      Left();
      break;

    case 'p' :
      rotate_Clockwise();
      break;

    case 'g' :
      rotate_antiClockwise();
      break;

    case 'S' :
      stopped();
      break;

      case 'd' :
      right_d();
      break;

      case 'c' :
      left_d();
      break;
  }

}

void Forward()
{

  s1.write(170);
  delay(100);
  s2.write(60);
  delay(100);
  s3.write(60);
  delay(100);
  s4.write(165);
  delay(100);


  pM1 = 130;
  pM2 = 120;
  pM3 = 120;
  pM4 = 120;

//FOR ROTATING MOTORS IN VLOVKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

// FOR GIVING PWM TO MOTORS 

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
  delay(100);
}

void Backward()
{

  s1.write(170);
  delay(100);
  s2.write(60);
  delay(100);
  s3.write(60);
  delay(100);
  s4.write(170);
  delay(100);

  pM1 = 130;
  pM2 = 120;
  pM3 = 120;
  pM4 = 120;

//FOR ROTATING MOTORS IN CLOCKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);

// FOR GIVING PWM TO MOTORS 

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
}



void Right()
{
  s1.write(60);
  delay(100);
  s2.write(155);
  delay(100);
  s3.write(160);
  delay(100);
  s4.write(60);
  delay(100);

  pM1 = 130;
  pM2 = 130;
  pM3 = 130;
  pM4 = 130;

//FOR ROTATING MOTORS IN CLOCKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);

// FOR GIVING PWM TO MOTORS 

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
  delay(100);
}

void Left()
{
  s1.write(60);
  delay(100);
  s2.write(160);
  delay(100);
  s3.write(160);
  delay(100);
  s4.write(60);
  delay(100);

  pM1 = 130;
  pM2 = 130;
  pM3 = 130;
  pM4 = 130;

//FOR ROTATING MOTORS IN CLOCKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);

// FOR GIVING PWM TO MOTORS 

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
  delay(100);
}

void rotate_Clockwise()
{
  s1.write(125);
  s2.write(105);
  s3.write(10);
  s4.write(10);
  
  pM1 = 130;
  pM2 = 130;
  pM3 = 130;
  pM4 = 130;

//FOR ROTATING MOTORS IN CLOCKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);

// FOR GIVING PWM TO MOTORS 

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
  delay(100);
}


void rotate_antiClockwise()
{
  s1.write(125);
  s2.write(105);
  s3.write(10);
  s4.write(10);

  pM1 = 130;
  pM2 = 130;
  pM3 = 130;
  pM4 = 130;

//FOR ROTATING MOTORS IN CLOCKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);

// FOR GIVING PWM TO MOTORS 

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
delay(100);
}

void right_d()
{

  s1.write(10);
  delay(100);
  s2.write(115);
  delay(100);
  s3.write(115);
  delay(100);
  s4.write(10);
  delay(100);


  pM1 = 130;
  pM2 = 130;
  pM3 = 130;
  pM4 = 130;

//FOR ROTATING MOTORS IN CLOCKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);

// FOR GIVING PWM TO MOTORS 

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
  delay(100);
}

void left_d()
{
   s1.write(115);
  delay(100);
  s2.write(10);
  delay(100);
  s3.write(15);
  delay(100);
  s4.write(115);
  delay(100);

  pM1 = 130;
  pM2 = 130;
  pM3 = 130;
  pM4 = 130;

//FOR ROTATING MOTORS IN CLOCKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

// FOR GIVING PWM TO MOTORS 

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
}
void stopped()
{
  pM1 = 0;
  pM2 = 0;
  pM3 = 0;
  pM4 = 0;

//FOR ROTATING MOTORS IN CLOCKWISE  & ANTICLOCKWISE DIRECTION

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d3, HIGH);

// FOR GIVING PWM TO MOTORS BUT HERE WE HAVE TO STOP MOTORS WE SET PWM = 0

  analogWrite(m1, pM1);
  analogWrite(m2, pM2);
  analogWrite(m3, pM3);
  analogWrite(m4, pM4);
}

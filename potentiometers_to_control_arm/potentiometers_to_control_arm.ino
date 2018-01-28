#include <Servo.h>

Servo servo0;
int pos0 = 0;
Servo servo1;
int pos1 = 0;
Servo servo2;
int pos2 = 0;
Servo servo3;
int pos3 = 0;
Servo servo4;
int pos4 = 0;
Servo servo5;
int pos5 = 0;

double factor = (180.0/1024.0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo0.attach(13);
  servo1.attach(12);
  servo2.attach(11);
  servo3.attach(10);
  servo4.attach(9);
  servo5.attach(8);

}

void loop() {
  // put your main code here, to run repeatedly:

  
  int pot0 = analogRead(A0);
  Serial.print("Potentiometer 0 = ");
  Serial.println(pot0);
  pos0 = factor*pot0;
  Serial.print("Degrees0 = ");
  Serial.println(pos0);
  servo0.write(pos0);
  
  int pot1 = analogRead(A1);
  Serial.print("Potentiometer 1 = ");
  Serial.println(pot1);
  pos1 = factor*pot1;
  Serial.print("Degrees1 = ");
  Serial.println(pos1);
  servo1.write(pos1);
  
  
  int pot2 = analogRead(A2);
  Serial.print("Potentiometer 2 = ");
  Serial.println(pot2);
  pos2 = factor*pot2;
  Serial.print("Degrees2 = ");
  Serial.println(pos2);
  servo2.write(pos2);
  
  
  int pot3 = analogRead(A3);
  Serial.print("Potentiometer 3 = ");
  Serial.println(pot3);
  pos3 = factor*pot3;
  Serial.print("Degrees3 = ");
  Serial.println(pos3);
  servo3.write(pos3);
  
  
  int pot4 = analogRead(A4);
  Serial.print("Potentiometer 4 = ");
  Serial.println(pot4);
  pos4 = factor*pot4;
  Serial.print("Degrees4 = ");
  Serial.println(pos4);
  servo4.write(pos4);
  
  int pot5 = analogRead(A5);  
  Serial.print("Potentiometer 5 = ");
  Serial.println(pot5);
  pos5 = factor*pot5;  
  Serial.print("Degrees5 = ");
  Serial.println(pos5);
  servo5.write(pos5);
  

}

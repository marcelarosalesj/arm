#include <Servo.h>

Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
//Servo servo5;

int pot0 = A0;
int pot1 = A1;
int pot2 = A2;
int pot3 = A3;
int pot4 = A4;
//int pot5 = A5;

int val0 = 0;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
//int val5 = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  servo0.attach(13);
  servo0.write(90);

  servo1.attach(12);
  servo1.write(90);

  servo2.attach(11);
  servo2.write(90);

  servo3.attach(10);
  servo3.write(90);

  servo4.attach(9);
  servo4.write(90);

  //servo5.attach(8);
  //servo5.write(90);

}

void loop() {

  val0 = analogRead(pot0);
  val0 = map(val0, 0, 1023, 0, 180);
  servo0.write(val0);

  val1 = analogRead(pot1);
  val1 = map(val1, 0, 1023, 10, 170);
  servo1.write(val1);

  val2 = analogRead(pot2);
  val2 = map(val2, 0, 1023, 20, 90);
  servo2.write(val2);

  val3 = analogRead(pot3);
  val3 = map(val3, 0, 1023, 10, 100);
  servo3.write(val3);

  val4 = analogRead(pot4);
  val4 = map(val4, 0, 1023, 20, 140);
  servo4.write(val4);

  /*val5 = analogRead(pot5);
    val5 = map(val5, 0, 1023, 0, 180);
    servo5.write(val5);
    //delay(15);*/

  delay(100);

}

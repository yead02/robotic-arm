#include <Servo.h>
Servo s1;
Servo s2;

int ds1 = 0;
int ds2 = 180;

void setup() {
  s1.attach(9);
  s2.attach(10);
  s1.write(0);
  s2.write(180);
}

void loop() {  
}

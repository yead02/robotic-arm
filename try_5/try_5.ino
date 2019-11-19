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

  for(ds2 = 180; ds2 > 90; ds2 -= 1)
  {
    s2.write(ds2);
    delay(15);
  }
  
  
  for(ds1 = 0; ds1 < 40; ds1 += 1)
  {
    s1.write(ds1);
    delay(15);
  }


  for(ds2 = 90; ds2 < 180; ds2 += 1)
  {
    s2.write(ds2);
    delay(15);
  }

  for(ds1 = 40; ds1 > 0; ds1 -= 1)
  {
    s1.write(ds1);
    delay(15);
  }
  
}

#include  <Servo.h>              //Servo library
 
Servo servo_top;        //initialize a servo object for the connected servo  
Servo servo_mid;
Servo servo_bot;
                
int top_angle = 0;
int mid_angle = 0;
int bot_angle = 0;    
 
void setup() 
{ 
  servo_top.attach(9);
  servo_mid.attach(8);
  servo_bot.attach(7);  // attach the signal pin of servo to pin9 of arduino
} 
  
void loop() 
{
  delay(1000);

  // mid down from 0 to 130

  for(mid_angle = 0; mid_angle < 130; mid_angle += 1)
  {
    servo_top.write(mid_angle);
    delay(15);
  }

  delay(1000);

  // top close from 0 to 50

  for(top_angle = 0; top_angle < 50; top_angle += 1)
  {
    servo_top.write(top_angle);
    delay(15);
  }

  delay(1000);

  // mid up from 130 to 0

  for(mid_angle = 130; mid_angle > 0; mid_angle -= 1)
  {
    servo_top.write(mid_angle);
    delay(15);
  }

  delay(1000);

  // bot turn from 0 to 180

  for(bot_angle = 0; bot_angle < 180; bot_angle += 1)
  {
    servo_top.write(bot_angle);
    delay(15);
  }

  delay(1000);

  // mid down from 0 to 90

  for(mid_angle = 0; mid_angle < 90; mid_angle += 1)
  {
    servo_top.write(mid_angle);
    delay(15);
  }

  delay(1000);

  // top open from 50 to 0

  for(top_angle = 0; top_angle < 130; top_angle += 1)
  {
    servo_top.write(top_angle);
    delay(15);
  }

  delay(1000);

  // mid up from 90 to 0

  for(mid_angle = 90; mid_angle > 0; mid_angle = -1)
  {
    servo_top.write(mid_angle);
    delay(15);
  }

  delay(1000);

  // bot turn from 180 to 0

  for(bot_angle = 180; bot_angle > 0; bot_angle -= 1)
  {
    servo_top.write(bot_angle);
    delay(15);
  }

  delay(1000);


  delay(100000);


}

 #include  <Servo.h>              //Servo library
 
Servo servo_test;        //initialize a servo object for the connected servo  
                
int angle = 40;    
 
void setup() 
{ 
  servo_test.attach(9);      // attach the signal pin of servo to pin9 of arduino
} 
  
void loop() 
{ 
  for(angle = 40; angle > 0; angle -= 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo_test.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
  delay(1000);

}

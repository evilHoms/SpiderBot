#include <Wire.h>
#include <Multiservo.h>
#include <SpiderLeg.h>

SpiderLeg spiderLeg1(17, 16, 15);

int pos = 0;  

void setup(void)
{
  Wire.begin();
//  myservo1.attach(17);
//  myservo2.attach(16);
//  myservo3.attach(15);
}

void loop(void)
{
//  for (pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees
//  { // in steps of 1 degree
//    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
//    myservo2.write(pos);  
//    myservo3.write(pos);  
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//  for (pos = 180; pos >= 0; pos -= 1) // goes from 180 degrees to 0 degrees
//  {
//    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
//    myservo2.write(pos);  
//    myservo3.write(pos);  
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
}

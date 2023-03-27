#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
  kb.servo(1,10);
  kb.servo(2,10);
  delay(5000);
  kb.beep();
  kb.servoStop(1);
  kb.servoStop(2);
}
void loop() 
{
}

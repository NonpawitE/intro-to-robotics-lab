#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
}
void loop() 
{
  kb.servo(1,10);
  kb.servo(2,10);
  delay(2000);
  kb.servo(1,170);
  kb.servo(2,170);
  delay(2000);
  
}

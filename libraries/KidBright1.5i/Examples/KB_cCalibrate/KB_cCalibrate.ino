#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
  kb.cCalibrate();
}
void loop() 
{
 kb.scroll(kb.heading());
}

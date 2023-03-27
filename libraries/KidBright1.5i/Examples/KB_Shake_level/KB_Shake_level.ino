#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
  kb.setShakeLevel(1);
}
void loop() 
{
 if(kb.isShake())
 {
  kb.beep(); 
 }
}

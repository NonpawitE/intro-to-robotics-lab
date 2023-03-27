#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
}
void loop() 
{
 if(kb.isTiltLeft())
 {
    kb.scroll("Tilt Left"); 
 }
}

#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
}
void loop() 
{
 if(kb.isTiltRight())
 {
    kb.scroll("Tilt Right"); 
 }
}

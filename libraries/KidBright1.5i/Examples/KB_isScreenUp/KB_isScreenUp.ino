#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
}
void loop() 
{
 if(kb.isScreenUp())
 {
    kb.scroll("Screen Up"); 
 }
}

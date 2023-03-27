#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
}
void loop() 
{
 if(kb.isScreenDown())
 {
    kb.scroll("Screen Down"); 
 }
}

#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
}
void loop() 
{
 if(kb.isBoardDown())
 {
    kb.scroll("Board Down"); 
 }
}

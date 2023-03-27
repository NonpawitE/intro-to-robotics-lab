#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
}
void loop() 
{
  kb.ledWIFI(1);
  kb.ledIOT(1);
  delay(500);
  kb.ledWIFI(0);
  kb.ledIOT(0);
  delay(500);
}

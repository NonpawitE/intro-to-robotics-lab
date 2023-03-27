#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
  kb.syncTime("INEX108","027477001-4");
}
void loop() 
{
  kb.scrollDateTime();
}

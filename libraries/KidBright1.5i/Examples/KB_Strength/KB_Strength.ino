#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
  Serial.begin(115200);
}
void loop() 
{
 //kb.scroll(kb.aStrength());
 Serial.println(kb.aStrength());
 delay(200);
}

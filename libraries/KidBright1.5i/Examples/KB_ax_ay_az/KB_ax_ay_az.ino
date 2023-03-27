#include <KB.h>	
KB kb;
void setup() 
{
  kb.begin();
  Serial.begin(115200);
  
}
void loop() 
{
 //kb.scroll(kb.az());
 Serial.println(kb.az());
 delay(200);
}

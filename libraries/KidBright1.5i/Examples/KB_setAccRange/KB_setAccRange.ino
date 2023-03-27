#include <KB.h>	
KB kb;
void setup() 
{
  Serial.begin(115200);
  kb.begin();
  kb.setAccRange(ACC_RANGE_8G);
}
void loop() 
{
 Serial.println(kb.az());
 delay(200);
}

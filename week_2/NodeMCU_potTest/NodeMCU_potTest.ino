#define ANALOG_PIN A0

int analogValue = 0;

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  analogValue = analogRead(ANALOG_PIN);
  Serial.print("Analog input0 =");
  Serial.println(analogValue);
  delay(300);
}

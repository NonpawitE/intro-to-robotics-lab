#include "DHT.h"    // Include DHT library

// Declare DHT sensor type and pin
#define DHTTYPE DHT22
#define DHTPIN D4
DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  // Read value from sensor
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(", Humidity: ");
  Serial.println(h);
}

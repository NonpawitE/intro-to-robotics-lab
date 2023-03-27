#include <ESP8266WiFi.h>                  // Include ESP8266 library

const char* ssid      = "__SSID__";        // Set SSID
const char* password  = "__PASSWORD__";    // Set Wifi Password
#define     LEDpin    D0

void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.println();

  // Print title message to the serial monitor
  Serial.print("Connecting to ");
  // Print SSID name
  Serial.println(ssid);
  pinMode(LEDpin, OUTPUT);
  // WiFi detected indicator - active low
  digitalWrite(LEDpin, 0);

  // Send password and SSID to connect WiFi
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)   // Check WiFi status
  {
    delay(500);
    // Print dot for showing the progress status
    Serial.print(".");
  }
  Serial.println("");

  // Print the connected message
  Serial.println("WiFi connected");
  // Print IP address
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop()
{
  // WiFi connected indicator - active low
  digitalWrite(LEDpin, 0);

  while (WiFi.status() != WL_CONNECTED)   // Check WiFi status
  {
    // LED at D0 blink when disconnect WiFi
    digitalWrite(LEDpin, 0);
    delay(400);
    // Print error message to Serial Monitor
    Serial.println("connection WiFi failed");
    digitalWrite(LEDpin, 1);
    delay(100);
  }
}

// Import essential libraries
#include <PubSubClient.h>
#include <ESP8266WiFi.h>

// Config WiFi
const char* ssid          = "__SSID__";
const char* password      = "__PASS__";

// Config NETPIE
const char* mqtt_server   = "broker.netpie.io";
const int   mqtt_port     = 1883;
const char* mqtt_client   = "__CLIENT_ID__";
const char* mqtt_username = "__TOKEN__";
const char* mqtt_password = "__SECRET__";

WiFiClient espClient;
PubSubClient client(espClient);

void reconnect() 
{
  while (!client.connected()) 
  {
    if (client.connect(mqtt_client, mqtt_username, mqtt_password)) 
    {
      Serial.println("connected");
    } 
    else 
    {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println("try again in 5 seconds");
      delay(5000);
    } 
  } 
}

void setup() 
{
  // Initialize sensors and serial
  Serial.begin(115200);
  Serial.println();
  Serial.println("Connecting to ");
  Serial.println(ssid);

  // Initialize WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  // Initialize with MQTT
  client.setServer(mqtt_server, mqtt_port);
}

void loop() 
{
  // Check connection status
  if (!client.connected())
  {
    reconnect();
  }
  client.loop();
}
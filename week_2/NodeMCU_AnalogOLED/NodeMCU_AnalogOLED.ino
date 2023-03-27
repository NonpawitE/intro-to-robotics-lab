#include  <Wire.h>              // Include I2C bus library
#include  <SPI.h>                                
#include  <Adafruit_GFX.h>      // Include OLED library
#include  <Adafruit_SSD1306.h>  // Include OLED library

#define   OLED_RESET  -1
// Create new OLED object
Adafruit_SSD1306      OLED(OLED_RESET);

void setup()   
{
  // Initialize with I2C address 0x3C (for the 128x64)
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop() 
{
  OLED.clearDisplay();
  // Set display color as white
  OLED.setTextColor(WHITE);
  // Set start position of display
  OLED.setCursor(15, 0);
  // Set text size x2
  OLED.setTextSize(2);
  // Show title message
  OLED.println("Read ADC");
  // Set display position 
  OLED.setCursor(15, 35);
  // Set text size x2
  OLED.setTextSize(2);
  // Show result value
  OLED.println("A0=" + String(analogRead(A0)));
  // Enable display
  OLED.display();
}

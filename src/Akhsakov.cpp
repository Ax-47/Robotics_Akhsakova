#include "Akhsakov.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <Wire.h>
ESP32Akhsakova::ESP32Akhsakova() {}

void ESP32Akhsakova::oledInit() {
  Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
  this->oled = oled;
  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("failed to start SSD1306 OLED"));
    while (1)
      ;
  }
  delay(2000);         // wait two seconds for initializing
  oled.clearDisplay(); // clear display
  oled.setTextSize(2);
  oled.setTextColor(WHITE);
  oled.setCursor(0, 10);
  oled.println("Created by");
  oled.display();
  delay(1000);
  oled.clearDisplay();
  oled.setCursor(0, 10);
  oled.println("Mikhail\nAkhsakov");
  oled.display();
  delay(2000);
  oled.clearDisplay();
  oled.display();
}

void ESP32Akhsakova::Begin() { this->oledInit(); }

#include "Akhsakov.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <Wire.h>
ESP32Akhsakova::ESP32Akhsakova()
    : oled{SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1} {}

void ESP32Akhsakova::oledInit() {
  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("failed to start SSD1306 OLED"));
    while (1)
      ;
  }
  delay(2000);               // wait two seconds for initializing
  this->oled.clearDisplay(); // clear display
  this->oled.setTextSize(2);
  this->oled.setTextColor(WHITE);
  this->oled.setCursor(0, 10);
  this->oled.println("Created by");
  this->oled.display();
  delay(1000);
  this->oled.clearDisplay();
  this->oled.setCursor(0, 10);
  this->oled.println("Mikhail\nAkhsakov");
  this->oled.display();
  delay(2000);
  this->oled.clearDisplay();
  this->oled.display();
}
void ESP32Akhsakova::Begin() {
  this->oledInit();
  // this->akhsakov();
}

#include "Akhsakov.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <Wire.h>
ESP32Akhsakova::ESP32Akhsakova()
    : oled{SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1}, pcf8574{0x20} {}

void ESP32Akhsakova::oledInit() {
  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("failed to start SSD1306 OLED"));
    while (1)
      ;
  }
}

void ESP32Akhsakova::pcf8574Init() {
  for (int i = 1; i < 3; i++)
    this->pcf8574.pinMode(i, INPUT);

  for (int i = 3; i < 6; i++)
    this->pcf8574.pinMode(i, OUTPUT);
  this->pcf8574.begin();
  delay(2000);
}

void ESP32Akhsakova::akhsakov() {
  bool isHigh = true;
  for (int i = 0; i < 6; i++) {
    for (int j = 3; j < 6; j++)
      this->pcf8574.digitalWrite(j, (isHigh) ? HIGH : LOW);
    isHigh = !isHigh;
    delay(200);
  }
  this->oled.clearDisplay();
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
Adafruit_SSD1306 *ESP32Akhsakova::GetOled() { return &this->oled; }
PCF8574 *ESP32Akhsakova::GetPCF8574() { return &this->pcf8574; }
int ESP32Akhsakova::GetValueBotton1() { return this->pcf8574.digitalRead(1); }
int ESP32Akhsakova::GetValueBotton2() { return this->pcf8574.digitalRead(2); }
void ESP32Akhsakova::SetLedGreen(int status) {
  this->pcf8574.digitalWrite(3, status);
}

void ESP32Akhsakova::SetLedYellow(int status) {
  this->pcf8574.digitalWrite(4, status);
}
void ESP32Akhsakova::SetLedRed(int status) {
  this->pcf8574.digitalWrite(5, status);
}

void ESP32Akhsakova::Begin() {
  this->oledInit();
  this->pcf8574Init();
  this->akhsakov();
}

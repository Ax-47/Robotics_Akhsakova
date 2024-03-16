
#ifndef AKHSAKOV
#define AKHSAKOV
#include "DustSensor/DustSensor.h"
#include "LightSensor/LightSensor.h"
#include "Motor/Motor.h"
#include "PCF8574.h"
#include "UltraSonicSensor/UltraSonicSensor.h"
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

class ESP32Akhsakova {
public:
  ESP32Akhsakova();
  void Begin();

private:
  Adafruit_SSD1306 oled;
  PCF8574 pcf8574;
  void oledInit();
  void pcf8574Init();
  void akhsakov();
};

#endif

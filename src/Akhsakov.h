
#ifndef AKHSAKOV
#define AKHSAKOV
#include "DustSensor/DustSensor.h"
#include "LightSensor/LightSensor.h"
#include "Motor/Motor.h"
#include "PCF8574.h"
#include "UltraSonicSensor/UltraSonicSensor.h"
#include "constants.h"
#include <Adafruit_SSD1306.h>
class ESP32Akhsakova {
public:
  ESP32Akhsakova();
  void Begin();
  Adafruit_SSD1306 *GetOled();
  PCF8574 *GetPCF8574();
  MotorAkhsakova *GetMotorAkhsakova();
  int GetValueBotton1();
  int GetValueBotton2();
  void SetLedGreen(int status);
  void SetLedYellow(int status);
  void SetLedRed(int status);
  void SetMotorSpeed(int _motor, int _speed);

private:
  Adafruit_SSD1306 oled;
  PCF8574 pcf8574;
  MotorAkhsakova motor1;
  MotorAkhsakova motor2;
  void oledInit();
  void pcf8574Init();
  void akhsakov();
};

#endif

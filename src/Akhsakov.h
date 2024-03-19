
#ifndef AKHSAKOV
#define AKHSAKOV
#include "Buzzer/Buzzer.h"
#include "DustSensor/DustSensor.h"
#include "LightSensor/LightSensor.h"
#include "Motor/Motor.h"
#include "PCF8574.h"
#include "Structure.h"
#include "UltraSonicSensor/UltraSonicSensor.h"
#include "constants.h"
#include <Adafruit_SSD1306.h>
#include <DHT.h>
// TODO DELETE FUCKING THIS
class ESP32Akhsakova : public StructureAkhsakova {
public:
  ESP32Akhsakova();
  void Begin();
  Adafruit_SSD1306 *GetOled();
  PCF8574 *GetPCF8574();
  MotorAkhsakova *GetMotor1();
  MotorAkhsakova *GetMotor2();
  BuzzerAkhsakova *GetBuzzer();
  DHT *GetDHT();
  LightSensorAkhsakova *GetLightSensor();
  int GetLightLevel();
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
  DHT dht;
  LightSensorAkhsakova lightSensor;
  BuzzerAkhsakova buzzer;
  void oledInit();
  void pcf8574Init();
  void akhsakov();
};

#endif

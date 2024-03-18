#include "LightSensor.h"
#include <Arduino.h>
LightSensorAkhsakova::LightSensorAkhsakova(int _pin) : pin(_pin) {}

void LightSensorAkhsakova::Begin() { pinMode(this->pin, INPUT); }
int LightSensorAkhsakova::GetLightLevel() { return analogRead(this->pin); }

#include "Motor.h"
#include <Arduino.h>
MotorAkhsakova::MotorAkhsakova(int pin1, int pin2, int ch1, int ch2)
    : pin1(pin1), pin2(pin2), ch1(ch1), ch2(ch2) {}

void MotorAkhsakova::Begin() {
  ledcSetup(this->ch1, 5000, 8);
  ledcSetup(this->ch2, 5000, 8);
  ledcAttachPin(this->pin1, this->ch1);
  ledcAttachPin(this->pin2, this->ch2);
}
void MotorAkhsakova::SetSpeed(int _speed) {
  if (_speed < 0) {
    _speed = abs(_speed);
    _speed = _speed * 2.55;
    _speed = min(_speed, 255);
    Serial.println(_speed);
    ledcWrite(this->ch1, 0);
    ledcWrite(this->ch2, _speed);
  } else {
    _speed = abs(_speed);
    _speed = _speed * 2.55;
    _speed = min(_speed, 255);

    Serial.println(_speed);
    ledcWrite(this->ch1, _speed);
    ledcWrite(this->ch2, 0);
  }
}

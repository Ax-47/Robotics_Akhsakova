#include "DustSensor.h"
#include <Arduino.h>

DustSensorAkhsakova::DustSensorAkhsakova(){

}

void DustSensorAkhsakova::Begin(int _measurePin,int _ledPin){
  pinMode(_measurePin, INPUT);
  pinMode(_ledPin, OUTPUT);
  this->measurePin = _measurePin;
  this->ledPin = _ledPin;
}


float DustSensorAkhsakova::GetDustDensity(){
  digitalWrite(this->ledPin,LOW);
  delayMicroseconds(SAMPLING_TIME);
  float voMeasured = analogRead(this->measurePin); 
  delayMicroseconds(DELTA_TIME);
  digitalWrite(this->ledPin,HIGH);
  delayMicroseconds(SLEEP_TIME);
  float calcVoltage = voMeasured * (5.0 / 1024.0);
  return  170 * calcVoltage - 0.1;
}
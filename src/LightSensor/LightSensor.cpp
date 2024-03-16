#include "LightSensor.h"
#include <Arduino.h>
LightSensorAkhsakova::LightSensorAkhsakova(){

}


void LightSensorAkhsakova::Begin(int _analogPin){
  pinMode(_analogPin, INPUT);
  this->analogPin = _analogPin;
}
int LightSensorAkhsakova::GetLightLevel(){
  return analogRead(this->analogPin);
}
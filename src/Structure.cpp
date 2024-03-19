#include "Structure.h"

StructureAkhsakova::StructureAkhsakova() {}
void StructureAkhsakova::StructureBegin() { this->modules = new Module[12]; }
void StructureAkhsakova::AddModule(int _ch) {
  LightSensorAkhsakova *lightSensor;
  lightSensor = new LightSensorAkhsakova(35);
  this->modules[_ch].name = "lightsensor";
  this->modules[_ch].lightSensor = lightSensor;
}
void StructureAkhsakova::GetModule() {}

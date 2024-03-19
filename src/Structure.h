#ifndef STRUCTURE_H
#define STRUCTURE_H
#include "LightSensor/LightSensor.h"
struct Module {
  char *name;
  union {
    LightSensorAkhsakova *lightSensor;
  };
};
class StructureAkhsakova {
public:
  StructureAkhsakova();
  void StructureBegin();
  void AddModule(int _ch);
  void GetModule();

private:
  struct Module *modules;
};

#endif // !STRUCTURE

#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

class LightSensorAkhsakova {
private:
  // analog -> input
  int pin;

public:
  LightSensorAkhsakova(int _pin);
  void Begin();
  int GetLightLevel();
};

#endif

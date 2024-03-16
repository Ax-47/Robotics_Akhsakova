#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

class LightSensorAkhsakova{
  private :
    //analog -> input
    int analogPin;
  public :
    LightSensorAkhsakova();
    void Begin(int _analogPin);
    int GetLightLevel();
};

#endif
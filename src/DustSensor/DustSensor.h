//                 +++             ++
//                 + ++           ++++
//                ++  +++        ++  +
//               ++     ++++++++++    +
//               +                    +
//       +       +                    +
//     ++++++   ++   ───       #==    +
//    ++    +++ +                     +
//   ++      ++ +           ___       +
// +++        +++       ___ \  \     ++
// +           ++        \-____|     +
// +         +++                    ++
// +         +                      +
// +        ++                      +
// +        ++                      +
// ++       +                      +
//  +      ++       +  +        +  +
//  ++    +++++++++ +  +        +  +
//   ++   +       + +  +    +   +  +
//    ++  +       + +  +    +   +  +
//    +++++       +++  +    +   +  +
//       ++       +++  ++++++   +  +
//        +++++++++++  +++  +++++  +++
//                  ++++++      ++++++

#ifndef ULTRASONIC_H
#define SAMPLING_TIME 280
#define DELTA_TIME 40
#define SLEEP_TIME 9680
#define ULTRASONIC_H

class DustSensorAkhsakova{
  private :
    //measurePin -> Input
    //ledPower -> Output
    int measurePin;
    int ledPin; 
  public :
    
    DustSensorAkhsakova();
    void Begin(int _measurePin,int _ledPin);
    float GetDustDensity();
};

#endif
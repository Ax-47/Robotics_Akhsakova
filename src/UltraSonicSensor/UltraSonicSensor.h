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

#ifndef ULTRASONICSENSORAKHSAKOV_H
#define ULTRASONICSENSORAKHSAKOV_H

class UltraSonicSensorAkhsakova{
  private :
    //Trig -> output
    //Echo -> input
    int trig;
    int echo;
  public :
    UltraSonicSensorAkhsakova();
    void Begin(int _trig,int _echo);
    float GetDistance();
    float GetPurifyDistance();
};

#endif
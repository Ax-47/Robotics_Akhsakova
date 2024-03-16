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

#ifndef MOTOR_H
#define MOTOR_H

class MotorAkhsakova {
private:
  int motor1;
  int motor2;

public:
  MotorAkhsakova(int motor1, int motor2);
  void Speed(int _speed);
};

#endif

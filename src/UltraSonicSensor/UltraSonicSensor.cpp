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
#include "UltraSonicSensor.h"
#include <Arduino.h>
UltraSonicSensorAkhsakova::UltraSonicSensorAkhsakova() {
  
}
void UltraSonicSensorAkhsakova::Begin(int _trig, int _echo) {
  pinMode(_trig, OUTPUT);
  pinMode(_echo, INPUT);
  this->trig = _trig;
  this->echo = _echo;
}

float UltraSonicSensorAkhsakova::GetDistance() {
  digitalWrite(this->trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(this->trig, LOW);
  float duration_us = pulseIn(this->echo, HIGH);
  float distance_cm = 0.017 * duration_us;
  return distance_cm;
}

float UltraSonicSensorAkhsakova::GetPurifyDistance() {
  float filterArray[20];
  for (int sample = 0; sample < 20; sample++) {
    filterArray[sample] = this->GetDistance();
    delay(30);
  }
  for (int i = 0; i < 19; i++)
    for (int j = i + 1; j < 20; j++)
      if (filterArray[i] > filterArray[j]) {
        float swap = filterArray[i];
        filterArray[i] = filterArray[j];
        filterArray[j] = swap;
      }
  double sum = 0;
  for (int sample = 5; sample < 15; sample++) {
    sum += filterArray[sample];
  }

  return sum / 10;
}
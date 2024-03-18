#ifndef BUZZER_H
#define BUZZER_H
#include "Pitches.h"
class BuzzerAkhsakova {
public:
  BuzzerAkhsakova(int _pin);
  void Begin();
  void Beep(int _dur);
  void Beep(int _pitch, int _dur);
  void ToneStart(int _pitch, int _dur);
  void ToneEnd();

private:
  int pin;
};

#endif

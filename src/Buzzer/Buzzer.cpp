#include "Buzzer.h"

#include <Arduino.h>
BuzzerAkhsakova::BuzzerAkhsakova(int _pin) : pin(_pin) {}

void BuzzerAkhsakova::Begin() { pinMode(this->pin, OUTPUT); }

void BuzzerAkhsakova::Beep(int _dur) {
  tone(this->pin, NOTE_A4, _dur);
  noTone(this->pin);
}

void BuzzerAkhsakova::Beep(int _pitch, int _dur) {
  tone(this->pin, _pitch, _dur);
  noTone(this->pin);
}
void BuzzerAkhsakova::ToneStart(int _pitch, int _dur) {
  tone(this->pin, _pitch, _dur);
}

void BuzzerAkhsakova::ToneEnd() { noTone(this->pin); }

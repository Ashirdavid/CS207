/* This code was to both check and cailbrate the microphone to pick up specific sounds made*/


#include <uspeech.h>
signal voice(A0);
void setup() {
  int minVolume;
  int fconstant;
  int econstant;
  int aconstant;
  int vconstant;
  int shconstant;
voice.calibrate();
voice.f_enabled = true;

Serial.begin(9600);
}

void loop() {
  Serial.println(voice.getPhoneme());
}

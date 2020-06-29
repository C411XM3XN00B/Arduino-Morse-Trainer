#include "variables.h"

void mdit(int outputPin) {
  digitalWrite(outputPin, 1);
  delay(dit*speedmultiplier);
  digitalWrite(outputPin, 0);
  delay(symbol_pause*speedmultiplier);
  //Serial.println("end of mdit");
}

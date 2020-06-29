#include "variables.h"

void mdah(int outputPin) {
  digitalWrite(outputPin, 1);
  delay(dah*speedmultiplier);
  digitalWrite(outputPin, 0);
  delay(symbol_pause*speedmultiplier);
}

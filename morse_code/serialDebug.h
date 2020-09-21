#include "variables.h"

void serialDebug() {
  Serial.println(F("============"));
  Serial.println(F("Debug OUTPUT"));
  Serial.println(F("============"));
  Serial.println("");
  Serial.print(F("total sentences: "));
  Serial.println(array_amount);
  Serial.print(F("speedmultiplier: "));
  Serial.println(speedmultiplier);
  Serial.println(F("timing in ms:"));
  Serial.print(F("  Dit-length: "));
  Serial.println(dit);
  Serial.print(F("  Dah-length: "));
  Serial.println(dah);
  Serial.print(F("  Symbol-pause: "));
  Serial.println(symbol_pause);
  Serial.print(F("  Character-pause: "));
  Serial.println(character_pause);
  Serial.print(F("  Word-pause: "));
  Serial.println(word_pause);
  Serial.println("");
}

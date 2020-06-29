#include "variables.h"

void serialDebug() {
  Serial.println("============");
  Serial.println("Debug OUTPUT");
  Serial.println("============");
  Serial.println("");
  Serial.print("total sentences: ");
  Serial.println(array_amount);
  Serial.print("speedmultiplier: ");
  Serial.println(speedmultiplier);
  Serial.println("timing in ms:");
  Serial.print("  Dit-length: ");
  Serial.println(dit);
  Serial.print("  Dah-length: ");
  Serial.println(dah);
  Serial.print("  Symbol-pause: ");
  Serial.println(symbol_pause);
  Serial.print("  Character-pause: ");
  Serial.println(character_pause);
  Serial.print("  Word-pause: ");
  Serial.println(word_pause);
  Serial.println("");
}

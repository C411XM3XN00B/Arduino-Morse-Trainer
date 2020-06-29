#include "mdit.h"
#include "mdah.h"
#include "variables.h"

void ditdah(char code[], int arraysize) {
  char morse;
  for (int i = 0; i < arraysize - 1; i++) {
         morse = code[i];
         //Serial.println(morse);
         //Serial.println(sizeof(code) - 1 );
         if (morse == '.') {
           mdit(outputPin);
         }
         else if (morse == '-') {
           mdah(outputPin);
         }
  }
    //Serial.println("end of ditdah");
  delay(character_pause*speedmultiplier);   
}

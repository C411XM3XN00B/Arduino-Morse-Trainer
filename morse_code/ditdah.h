#include "mdit.h"
#include "mdah.h"
#include "variables.h"

void ditdah(char code[], int arraysize) {
  char morse;
  for (int i = 0; i < strlen_P(code); i++) {
         morse = pgm_read_byte_near(code + i);
         //Serial.println(morse);
         //Serial.println(sizeof(code) - 1 );
         switch(morse) {
            case '.':
              mdit(outputPin);
              break;
            case '-':
              mdah(outputPin);
              break;
         }
  }
    //Serial.println("end of ditdah");
  delay(character_pause*speedmultiplier);   
}

#include "serialDebug.h"
#include "morseEncoder.h"
#include "variables.h"


void setup() {
  pinMode(outputPin, OUTPUT);
  Serial.begin(38400);
  serialDebug();
}

void loop() {
  /*while (digitalRead(buttonPin) == 0) {
  delay(100);  
  }*/
  Serial.print(F("random number: "));
  randomNumber = random(0, (array_amount - 1));
  Serial.println(randomNumber);
  
  switch(randomNumber) {
    case 0:
      morseEncoder(Str0, sizeof(Str0));
      break;
    case 1:
      morseEncoder(Str1, sizeof(Str1));
      break;
    case 2:
      morseEncoder(Str2, sizeof(Str2));
      break;
    case 3:
      morseEncoder(Str3, sizeof(Str3));
      break;
    case 4:
      morseEncoder(Str4, sizeof(Str4));
      break;
    case 5:
      morseEncoder(Str5, sizeof(Str5));
      break;
    case 6:
      morseEncoder(Str6, sizeof(Str6));
      break;
    case 7:
      morseEncoder(Str7, sizeof(Str7));
      break;
    case 8:
      morseEncoder(Str8, sizeof(Str8));
      break;
    case 9:
      morseEncoder(Str9, sizeof(Str9));
      break;
    default:
      Serial.println(F("default case"));
      morseEncoder(Strdefault, sizeof(Strdefault));
      Serial.println(F(" end of default case"));
      break;
  }
  Serial.println(F(""));
  Serial.println(F(""));
  delay(2000);
}

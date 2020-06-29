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
  Serial.print("random number: ");
  randomNumber = random(0, (array_amount - 1));
  Serial.println(randomNumber);

  if (randomNumber == 0) {
    char Str0[] = "test";
    morseEncoder(Str0, sizeof(Str0));
  }
  else if (randomNumber == 1) {
    char Str1[] = "hallo";
    morseEncoder(Str1, sizeof(Str1));
  }
  else if (randomNumber == 2) {
    char Str2[] = "sos sos sos sos sos";
    morseEncoder(Str2, sizeof(Str2));
  }
  else if (randomNumber == 3) {
    char Str3[] = "aabbccdd";
    morseEncoder(Str3, sizeof(Str3));
  }
  else if (randomNumber == 4) {
    char Str4[] = "new york city";
    morseEncoder(Str4, sizeof(Str4));
  }
  else if (randomNumber == 5) {
    char Str5[] = "guess what";
    morseEncoder(Str5, sizeof(Str5));
  }
  else if (randomNumber == 6) {
    char Str6[] = "arduino morse code";
    morseEncoder(Str6, sizeof(Str6));
  }
  else if (randomNumber == 7) {
    char Str7[] = "amateurfunk";
    morseEncoder(Str7, sizeof(Str7));
  }
  else if (randomNumber == 8) {
    char Str8[] = "hallo wie geht es dir";
    morseEncoder(Str8, sizeof(Str8));
  }
  else if (randomNumber == 9) {
    char Str9[] = "moin mir geht es gut";
    morseEncoder(Str9, sizeof(Str9));
  }
  Serial.println("");
  Serial.println("");
  delay(2000);
}

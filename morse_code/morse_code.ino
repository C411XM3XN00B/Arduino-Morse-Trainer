/*
-no output (sentence string and all variables dependant on it stay empty)
*/
#include "serialDebug.h"
#include "morseEncoder.h"
#include "variables.h"

int i = 0;

void setup() {
  pinMode(outputPin, OUTPUT);
  Serial.begin(38400);
  serialDebug();
}

void loop() {
  /*while (digitalRead(buttonPin) == 0) {
  delay(100);  
  }*/
  Serial.print("current sentence number: ");
  Serial.println(i);

  String sentence = sentences[i];
  //Serial.println(sentence);
  char words[sentence.length()+1];
  sentence.toCharArray(words, sentence.length()+1);
  //Serial.println(words);

  morseEncoder(words, (sizeof(words)));
  //randomNumber++;
  if (i == array_amount) {
    i=0;  
  }
  else {
    i++;  
  }
  Serial.println("");
  Serial.println("");
  delay(2000);
}

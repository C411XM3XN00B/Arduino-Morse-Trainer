#include "ditdah.h"

void morseEncoder(char Str[], int arraysize) {
  Serial.print("selected sentence: ");
  Serial.println(Str);
  char sym;
  for (int i = 0; i < arraysize - 1; i++) {
    sym = Str[i];
    Serial.print(sym);
    //Serial.println(sizeof(Str));
    if (sym == 'a') {
      //Serial.println("a ausgewählt");
      char aStr[] = ".-";
      ditdah(aStr, sizeof(aStr));
    }
    else if (sym == 'b') {
      char bStr[] = "-...";
      ditdah(bStr, sizeof(bStr));
    }
    else if (sym == 'c') {
      char cStr[] = "-.-.";
      ditdah(cStr, sizeof(cStr));
    }
    else if (sym == 'd') {
      char dStr[] = "-..";
      ditdah(dStr, sizeof(dStr));
    }
    else if (sym == 'e') {
      char eStr[] = ".";
      ditdah(eStr, sizeof(eStr));
    }
    else if (sym == 'f') {
      char fStr[] = "..-.";
      ditdah(fStr, sizeof(fStr));
    }
    else if (sym == 'g') {
      char gStr[] = "--.";
      ditdah(gStr, sizeof(gStr));
    }
    else if (sym == 'h') {
      char hStr[] = "....";
      ditdah(hStr, sizeof(hStr));
    }
    else if (sym == 'i') {
      char iStr[] = "..";
      ditdah(iStr, sizeof(iStr));
    }
    else if (sym == 'j') {
      char jStr[] = ".---";
      ditdah(jStr, sizeof(jStr));
    }
    else if (sym == 'k') {
      char kStr[] = "-.-";
      ditdah(kStr, sizeof(kStr));
    }
    else if (sym == 'l') {
      char lStr[] = ".-..";
      ditdah(lStr, sizeof(lStr));
    }
    else if (sym == 'm') {
      char mStr[] = "--";
      ditdah(mStr, sizeof(mStr));
    }
    else if (sym == 'n') {
      char nStr[] = "-.";
      ditdah(nStr, sizeof(nStr));
    }
    else if (sym == 'o') {
      char oStr[] = "---";
      ditdah(oStr, sizeof(oStr));
    }
    else if (sym == 'p') {
      char pStr[] = ".--.";
      ditdah(pStr, sizeof(pStr));
    }
    else if (sym == 'q') {
      char qStr[] = "--.-";
      ditdah(qStr, sizeof(qStr));
    }
    else if (sym == 'r') {
      char rStr[] = ".-.";
      ditdah(rStr, sizeof(rStr));
    }
    else if (sym == 's') {
      //Serial.println("s ausgewählt");
      char sStr[] = "...";
      ditdah(sStr, sizeof(sStr));
    }
    else if (sym == 't') {
      char tStr[] = "-";
      ditdah(tStr, sizeof(tStr));
    }
    else if (sym == 'u') {
      char uStr[] = "..-";
      ditdah(uStr, sizeof(uStr));
    }
    else if (sym == 'v') {
      char vStr[] = "...-";
      ditdah(vStr, sizeof(vStr));
    }
    else if (sym == 'w') {
      char wStr[] = ".--";
      ditdah(wStr, sizeof(wStr));
    }
    else if (sym == 'x') {
      char xStr[] = "-..-";
      ditdah(xStr, sizeof(xStr));
    }
    else if (sym == 'y') {
      char yStr[] = "-.--";
      ditdah(yStr, sizeof(yStr));
    }
    else if (sym == 'z') {
      char zStr[] = "--..";
      ditdah(zStr, sizeof(zStr));
    }
    else if (sym == '0') {
      char num0Str[] = "-----";
      ditdah(num0Str, sizeof(num0Str));
    }
    else if (sym == '1') {
      char num1Str[] = ".----";
      ditdah(num1Str, sizeof(num1Str));
    }
    else if (sym == '2') {
      char num2Str[] = "..---";
      ditdah(num2Str, sizeof(num2Str));
    }
    else if (sym == '3') {
      char num3Str[] = "...--";
      ditdah(num3Str, sizeof(num3Str));
    }
    else if (sym == '4') {
      char num4Str[] = "....-";
      ditdah(num4Str, sizeof(num4Str));
    }
    else if (sym == '5') {
      char num5Str[] = ".....";
      ditdah(num5Str, sizeof(num5Str));
    }
    else if (sym == '6') {
      char num6Str[] = "-....";
      ditdah(num6Str, sizeof(num6Str));
    }
    else if (sym == '7') {
      char num7Str[] = "--...";
      ditdah(num7Str, sizeof(num7Str));
    }
    else if (sym == '8') {
      char num8Str[] = "---..";
      ditdah(num8Str, sizeof(num8Str));
    }
    else if (sym == '9') {
      char num9Str[] = "----.";
      ditdah(num9Str, sizeof(num9Str));
    }
    else if (sym == ' ') {
      Serial.print(" ");
      delay((word_pause - character_pause)*speedmultiplier);
    }
    
  }
}

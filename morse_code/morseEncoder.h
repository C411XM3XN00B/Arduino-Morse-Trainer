#include "ditdah.h"

        const PROGMEM char aStr[] = ".-";
        const PROGMEM char bStr[] = "-...";
        const PROGMEM char cStr[] = "-.-.";
        const PROGMEM char dStr[] = "-..";
        const PROGMEM char eStr[] = ".";
        const PROGMEM char fStr[] = "..-.";
        const PROGMEM char gStr[] = "--.";
        const PROGMEM char hStr[] = "....";
        const PROGMEM char iStr[] = "..";
        const PROGMEM char jStr[] = ".---";
        const PROGMEM char kStr[] = "-.-";
        const PROGMEM char lStr[] = ".-..";
        const PROGMEM char mStr[] = "--";
        const PROGMEM char nStr[] = "-.";
        const PROGMEM char oStr[] = "---";
        const PROGMEM char pStr[] = ".--.";
        const PROGMEM char qStr[] = "--.-";
        const PROGMEM char rStr[] = ".-.";
        const PROGMEM char sStr[] = "...";
        const PROGMEM char tStr[] = "-";
        const PROGMEM char uStr[] = "..-";
        const PROGMEM char vStr[] = "...-";
        const PROGMEM char wStr[] = ".--";
        const PROGMEM char xStr[] = "-..-";
        const PROGMEM char yStr[] = "-.--";
        const PROGMEM char zStr[] = "--..";
        const PROGMEM char num0Str[] = "-----";
        const PROGMEM char num1Str[] = ".----";
        const PROGMEM char num2Str[] = "..---";
        const PROGMEM char num3Str[] = "...--";
        const PROGMEM char num4Str[] = "....-";
        const PROGMEM char num5Str[] = ".....";
        const PROGMEM char num6Str[] = "-....";
        const PROGMEM char num7Str[] = "--...";
        const PROGMEM char num8Str[] = "---..";
        const PROGMEM char num9Str[] = "----.";

void morseEncoder(char Str[], int arraysize) {
  Serial.print(F("selected sentence: "));
  for (byte k = 0; k < strlen_P(Str); k++) {
    myChar = pgm_read_byte_near(Str + k);
    Serial.print(myChar);
  }
  Serial.println();
  char sym;
  for (int i = 0; i < strlen_P(Str); i++) {
    sym = pgm_read_byte_near(Str + i);
    Serial.print(sym);
    //Serial.println(sizeof(Str));
    
    switch(sym) {
      case 'a':
        ditdah(aStr, sizeof(aStr));
       break;
      case 'b':
        ditdah(bStr, sizeof(bStr));
        break;
      case 'c':
        ditdah(cStr, sizeof(cStr));
        break;
      case 'd':
        ditdah(dStr, sizeof(dStr));
        break;
      case 'e':
        ditdah(eStr, sizeof(eStr));
        break;
      case 'f':
        ditdah(fStr, sizeof(fStr));
        break;
      case 'g':
        ditdah(gStr, sizeof(gStr));
        break;
      case 'h':
        ditdah(hStr, sizeof(hStr));
        break;
      case 'i':
        ditdah(iStr, sizeof(iStr));
        break;
      case 'j':
        ditdah(jStr, sizeof(jStr));
        break;
      case 'k':
        ditdah(kStr, sizeof(kStr));
        break;
      case 'l':
        ditdah(lStr, sizeof(lStr));
        break;
      case 'm':
        ditdah(mStr, sizeof(mStr));
        break;
      case 'n':
        ditdah(nStr, sizeof(nStr));
        break;
      case 'o':
        ditdah(oStr, sizeof(oStr));
        break;
      case 'p':
        ditdah(pStr, sizeof(pStr));
        break;
      case 'q':
        ditdah(qStr, sizeof(qStr));
        break;
      case 'r':
        ditdah(rStr, sizeof(rStr));
        break;
      case 's':
        //Serial.println("s ausgewählt");
        ditdah(sStr, sizeof(sStr));
        break;
      case 't':
        ditdah(tStr, sizeof(tStr));
        break;
      case 'u':
        ditdah(uStr, sizeof(uStr));
        break;
      case 'v':
        ditdah(vStr, sizeof(vStr));
        break;
      case 'w':
        ditdah(wStr, sizeof(wStr));
        break;
      case 'x':
        ditdah(xStr, sizeof(xStr));
        break;
      case 'y':
        ditdah(yStr, sizeof(yStr));
        break;
      case 'z':
        ditdah(zStr, sizeof(zStr));
        break;
      case '0':
        ditdah(num0Str, sizeof(num0Str));
        break;
      case '1':
        ditdah(num1Str, sizeof(num1Str));
        break;
      case '2':
        ditdah(num2Str, sizeof(num2Str));
        break;
      case '3':
        ditdah(num3Str, sizeof(num3Str));
        break;
      case '4':
        ditdah(num4Str, sizeof(num4Str));
        break;
      case '5':
        ditdah(num5Str, sizeof(num5Str));
        break;
      case '6':
        ditdah(num6Str, sizeof(num6Str));
        break;
      case '7':
        ditdah(num7Str, sizeof(num7Str));
        break;
      case '8':
        ditdah(num8Str, sizeof(num8Str));
        break;
      case '9':
        ditdah(num9Str, sizeof(num9Str));
        break;
      default:
        Serial.print(F(" "));
        delay((word_pause - character_pause)*speedmultiplier);
        break;
    }
  }
}

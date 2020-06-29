#ifndef VARIABLES_H
#define VARIABLES_H

const char* sentences[] = {"word1","someother word","this is also a sentence",
"blip","bloopedi doop","2b or not 2b","hello world","is this a sentence",
"test","hallo","sos sos sos sos sos","aabbccdd","new york city","guess what",
"arduino morse code","amateurfunk","hallo wie geht es dir","moin mir geht es gut"};

const int dit = 25;
const int dah = 3*dit;

const int symbol_pause = dit;
const int character_pause = 3*dit;
const int word_pause = 7*dit;

int speedmultiplier = 1;
const int array_amount = (sizeof(sentences) / 2);

const int outputPin = 13;
const int buttonPin = 0;

#endif

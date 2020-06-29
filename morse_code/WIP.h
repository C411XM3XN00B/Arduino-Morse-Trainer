String sentences[] = {"test","hallo","sos sos sos sos sos","aabbccdd","new york city","guess what"," arduino morse code","amateurfunk","hallo wie geht es dir","moin mir geht es gut"};

int randomNumber = 0;
int array_amount = 10;


void setup()
{
  Serial.begin(9600);
  Serial.println("============");
  Serial.println("Debug OUTPUT");
  Serial.println("============");
  Serial.println("");
}

void loop()
{
  Serial.print("random number: ");
  randomNumber = random(0, (array_amount - 1));
  Serial.println(randomNumber);
  Serial.print("string in sentences array: ");
  Serial.println(sentences[randomNumber]);
  
  String word = sentences[randomNumber];
  Serial.print("length of word: ");
  Serial.println(word.length());
  Serial.print("string in word: ");
  Serial.println(word);
  
  char Str[(word.length() + 1)];
  word.toCharArray(Str, (word.length() + 1));
  Serial.print("length of Str array: ");
  Serial.println(sizeof(Str));
  Serial.print("string in Str array: ");
  Serial.println(Str);
  
  
  Serial.println("");
  Serial.println("");
  delay(2000);
}

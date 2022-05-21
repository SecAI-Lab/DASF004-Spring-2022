#include <stdio.h>
#include <string.h>

typedef struct _word {
  char str[20];
  int count;
} WORD;

void SetWord2(WORD* word, const char* str) {
  strncpy(word->str, str, strlen(word->str));
}

WORD MakeWord(const char* str) {
  WORD w;
  strncpy(w.str, str, sizeof(w.str));
  w.count = 0;
  return w;
}

void PrintWord(WORD w) {
  printf("Word: %s\n", w.str);
  printf("Count: %d\n", w.count);
}

int main() {
  WORD aWord = MakeWord("Turtle");
  PrintWord(aWord);

  SetWord2(&aWord, "Rabbit");
  PrintWord(aWord);

  SetWord2(&aWord, "Elk");
  PrintWord(aWord);
  return 0;
}


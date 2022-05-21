#include <stdio.h>
#include <string.h>

typedef struct _word {
  char str[20];
  int count;
} WORD;

// call-by-value, not actually setting word
// It creates another word and returns it. (It is not 'Set a word'.)
WORD SetWord(WORD word, const char* str) {
  // Wrong!
  //WORD ret_word = {str, word.count};
  WORD ret_word;
  strncpy(ret_word.str, str, sizeof(ret_word.str));
  ret_word.count = word.count;
  return ret_word;
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

  aWord = SetWord(aWord, "Rabbit");
  PrintWord(aWord);

  SetWord(&aWord, "Elk");
  PrintWord(aWord);
  return 0;
}


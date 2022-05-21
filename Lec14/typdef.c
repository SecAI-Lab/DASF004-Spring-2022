#include <stdio.h>
#include <string.h>

// Definition of a structure with typedef
typedef struct _word {
  char str[20];
  int count;
} WORD;

int main() {
  WORD w1 = {"Rabbit", 0};
  WORD w2;

  strncpy(w2.str, "Turtle", sizeof(w2.str));
  w2.count = 0;

  printf("w1 - Word: %s Count: %d\n", w1.str, w1.count);
  printf("w2 - Word: %s Count: %d\n", w2.str, w2.count);

  return 0;
}


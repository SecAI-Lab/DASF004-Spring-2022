#include <stdio.h>
#include <string.h>

// Definition of a structure
struct _word {
  char str[20];
  int count;
};

int main() {
  struct _word w1 = {"Rabbit", 0};
  struct _word w2;

  strncpy(w2.str, "Turtle", sizeof(w2.str));
  w2.count = 0;

  printf("w1 - Word: %s Count: %d\n", w1.str, w1.count);
  printf("w2 - Word: %s Count: %d\n", w2.str, w2.count);

  return 0;
}


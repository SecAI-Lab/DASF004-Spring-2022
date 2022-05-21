#include <stdio.h>
#include <string.h>

typedef struct _word {
  char str[20];
  int count;
} WORD;

void print_word(WORD w) {
  printf("Word: %s\n", w.str);
  printf("Count: %d\n", w.count);
}

int main() {
  WORD w1={"Rabbit", 0}, w2;
  w2 = w1;
  w2.count = 1;

  print_word(w1);
  print_word(w2);

  return 0;
}


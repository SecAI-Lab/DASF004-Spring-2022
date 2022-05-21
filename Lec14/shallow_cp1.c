#include <stdio.h>

struct _word {
  char str[20];
  int count;
};

int main(void) {
  struct _word w1 = {"Rabbit", 0};
  struct _word w2;

  // shallow copy with an assignment operator
  w2 = w1;
  printf("Word: %s, Count: %d\n", w2.str, w2.count);

  return 0;  
}

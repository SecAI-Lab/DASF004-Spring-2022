#include <stdio.h>
#include <string.h>

struct _word {
  char str[20];
  int count;
};

int main(void) {
  struct _word w1 = {"Rabbit", 0};
  struct _word w2;

  // shallow copy with memcpy()
  memcpy(&w2, &w1, sizeof(struct _word));

  // or you may use the following
  // memcpy(&w2, &w1, sizeof(w1));

  printf("Word: %s, Count: %d\n", w2.str, w2.count);

  return 0;  
}

#include <stdio.h>

int main() {
  int c = 'a';
  printf("%c\n", c); 

  c = getchar();
  printf("The character (%c) has the value %d.\n", c, c);
  return 0;
}


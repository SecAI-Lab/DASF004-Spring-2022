#include <stdio.h>

int main(void) {

  int i = 10;
  char c = 'a';

  // What we have learned here
  int* pi = &i;
  char* pc = &c;


  // Void pointer can hold any address
  void* ptr;
  ptr = &i;
  ptr = &c;

  // However, it does not hold type information
  // Thus, you cannot dereference it
  // printf("%c", *ptr);

  printf("i = %d (%d @ %p)\n", i, *pi, pi);
  printf("c = %c (%c @ %p)\n", c, *pc, pc);

  return 0;
}

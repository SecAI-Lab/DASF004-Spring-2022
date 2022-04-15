#include <stdio.h>

int main(void) {

  int i;
  int *p, *q;

  // p holds the address of the variable i
  p = &i;

  *p = 1;
  *q = 2;

  // A conversion specifier for a pointer type is %p
  printf("%p %p\n", p, q);
  printf("%d %d\n", *p, *q);

  return 0;
}


#include <stdio.h>

int main(void) {

  int i = 100;
  int* p;

  // p holds the address of the variable i
  p = &i;

  // after assigning a vaule of 1 to i,
  // i holds 1, and *p holds the value that it points to, which is 1
  i = 1;
  printf("%d\n", i);
  printf("%d\n", *p);

  // Another way of chaning the value at the address of i
  // *p changes the value that it points to, i
  *p = 2;
  printf("%d\n", i);
  printf("%d\n", *p);

  return 0;
}


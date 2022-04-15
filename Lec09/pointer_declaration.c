#include <stdio.h>

int main(void) {

  int a = 10;

  // a sinlge pointer declaration
  // "int* pa", "int *pa", "int * pa" are possible, but
  // int* pa is recommended to avoid confusion

  int* pa = NULL; // recommended to initialize with NULL or 0
  pa = &a;

  // multiple pointer declaration
  int *p, *q, *r;  // three integer pointers (*p, *q, *r)
  int *x, y, z;    // one pointer (*x), two integers (y and z)

  return 0;
}

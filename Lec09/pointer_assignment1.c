#include <stdio.h>

int main(void) {

  int i = 100;

  // int pointer type points to an int type, holding its address
  // * can be used when defining a pointer type!
  // & is an address operator, meaning "address of"
  int* p = &i;

  printf("%d\n", *p);

  // here * is a dereference operator!
  *p = 200;
  printf("%d\n", *p);

  return 0;
}


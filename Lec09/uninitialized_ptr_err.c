#include <stdio.h>

int main(void) {

  // Uninitialized pointer is dangerous, which may cause
  // an expected behavior (e.g., seg fault)
  int* p;
  printf("%d", *p); 

  // assigning a value to the uninitialized pointer can be dangerous  
  *p = 1;
  printf("%d", *p); 

  return 0;
}

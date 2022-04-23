#include <stdio.h>
#define N 10

int main(void) {

  int a[N]={1,2,3,4,5,6,7,8,9,10};
  int sum; 
  int *pa;

  // version 1
  for (sum = 0, pa = a; pa < a + N; pa++)
     sum += *pa;

  printf("Sum (ver1): %d\n", sum);

  // version 2
  for (sum = 0, pa = &a[0]; pa < &a[N]; pa++) 
     sum += *pa;

  printf("Sum (ver2): %d\n", sum);

  // version 3
  pa = a; sum = 0;
  while (pa < a + N) {
     sum += *pa;
     pa++;
  }
  
  printf("Sum (ver3): %d\n", sum);

  return 0;

}

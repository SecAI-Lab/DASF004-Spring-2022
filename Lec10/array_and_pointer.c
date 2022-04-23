#include <stdio.h>

int main(void)
{
  int a[10] = {10}, *pa;

  // Check out the relationship between an array and a pointer
  // Also, confirm the addresses and values of each representation
  pa = a;
  printf("%p %p %p\n", a, pa, &a[0]);
  printf("%d %d %d\n", *a, *pa, a[0]);

  return 0; 
}


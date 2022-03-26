#include <stdio.h>

int main()
{
  int numbers[10] = { 0 };

  // An array has been initialized with zeros
  for(int i=0; i<10; i++)
    printf("%d ", numbers[i]);

  printf("\n");
  return 0;
}

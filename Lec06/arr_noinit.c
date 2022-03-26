#include <stdio.h>

int main()
{
  int numbers[10];

  // What happened when an array has not been initialized?  
  for(int i=0; i<10; i++)
    printf("%d ", numbers[i]);

  printf("\n");
  return 0;
}

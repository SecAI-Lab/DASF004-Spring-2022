#include <stdio.h>

int main()
{
  // Observe how the position of increment/decrement
  //  operators affect the results

  int intNum = 0;
  printf("%d\n", intNum++);
  printf("%d\n", ++intNum);
  printf("%d\n", --intNum);
  printf("%d\n", intNum--);

  return 0;
}


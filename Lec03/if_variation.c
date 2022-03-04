#include <stdio.h>
int main()
{
  int i = 4;
  if (i % 2 == 0)
    if(!(i % 3 == 0))
      printf("i(%d)!!!\n", i);
    else
      printf("i(%d) is not...\n", i);
  return 0;
}


#include <stdio.h>
int main()
{
  int i = 4;
  if ( (i % 2 == 0) && !(i % 3 == 0))
    printf("i(%d) is a multiple of two and not of three.\n", i);
  else
    printf("i(%d) is not a number we are looking for.\n", i);
  return 0;
}


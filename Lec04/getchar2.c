#include <stdio.h>

int main()
{
  int c;
  int num_of_a = 0;

  while( (c = getchar()) != '\n' ) {
    if(c == 'a') {
      num_of_a++;
    }
  }
  printf("The number of 'a' is %d.\n",
          num_of_a);

  return 0;
}


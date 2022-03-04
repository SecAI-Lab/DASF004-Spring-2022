// This program accepts an integer from a user
// // and checks whether it is odd or even.

#include <stdio.h>

int main()
{
  int number;
  printf("Input a number : ");
  scanf("%d", &number);

  if (number % 2 == 0)
    printf("%d is even.\n", number);
  else
    printf("%d is odd\n", number);
  return 0;
}



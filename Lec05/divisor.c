#include <stdio.h>

int main()
{
  int number = 0;
  printf("Input a number: ");
  scanf("%d", &number);

  for(int i = 1; i <= number; i++) {
    if(number % i == 0) {
      printf("%d ", i);
    }
  }

  printf("\n");
}

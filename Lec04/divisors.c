#include <stdio.h>

int main()
{
  // Taking an integer as an input, 
  // and printing out all the divisors of the input

  int number = 0;
  printf("Enter a number: ");
  scanf("%d", &number);

  for(int i = 1; i <= number; i++) {
    if(number % i == 0) {
      printf("%d ", i); 
    }   
  }

  printf("\n");
}


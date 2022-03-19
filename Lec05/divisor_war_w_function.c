#include <stdio.h>

int GetNumberOfDivisors(int number)
{
  int count = 0;
  for(int i = 1; i <= number; i++) {
    if(number % i == 0) {
      printf("%d, ", i);
      count++;
    }
  }
  printf("\n");

  return count;
}

int main()
{
  int number1 = 0, number2 = 0;
  int count1 = 0, count2 = 0;
  printf("Input a number1: ");
  scanf("%d", &number1);
  printf("Input a number2: ");
  scanf("%d", &number2);

  count1 = GetNumberOfDivisors(number1);
  count2 = GetNumberOfDivisors(number2);
  
  printf("\n");

  if(count1 > count2)
    printf("%d wins!\n", number1);
  else if(count1 < count2)
    printf("%d wins!\n", number2);
  else
    printf("They tied!\n");
}

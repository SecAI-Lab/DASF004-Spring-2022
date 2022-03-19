#include <stdio.h>

int main()
{
  int number1 = 0;
  int number2 = 0;
  printf("Input a number1: ");
  scanf("%d", &number1);
  printf("Input a number2: ");
  scanf("%d", &number2);

  int count1 = 0;
  for(int i = 1; i <= number1; i++) {
    if(number1 % i == 0) {
      if(count1 != 0)
        printf(", ");
      printf("%d", i);
      count1++;
    }
  }

  printf("\n");

  int count2 = 0;
  for(int i = 1; i <= number2; i++) {
    if(number2 % i == 0) {
      if(count2 != 0)
        printf(", ");
      printf("%d", i);
      count2++;
    }
  }
  
  printf("\n");

  if(count1 > count2)
    printf("%d wins!\n", number1);
  else if(count1 < count2)
    printf("%d wins!\n", number2);
  else
    printf("They tied!\n");
}

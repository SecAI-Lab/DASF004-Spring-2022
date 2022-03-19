#include <stdio.h>
#include <time.h>

int Fibonacci(int num)
{
  if (num == 1) 
    return 0;
  if (num == 2)
    return 1;

  int num1 = 0, num2 = 1, num3 = 1;
  for(int i=0; i<num-3; i++) {
    num1 = num2;
    num2 = num3;
    num3 = num1 + num2;
  }
  return num3;
}

int main(int argc)
{
  int num;
  printf("Input a number: ");
  scanf("%d", &num);
  printf("%dth Fibonacci number is %d.\n", num, Fibonacci(num)); 

  return 0;
}


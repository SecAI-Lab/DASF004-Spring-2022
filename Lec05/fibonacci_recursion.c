#include <stdio.h>

int Fibonacci(int num)
{
  if (num == 1)
    return 0;
  if (num == 2)
    return 1;
  return Fibonacci(num - 2) + Fibonacci(num - 1);
}

int main()
{
  int num;
  printf("Input a number: ");
  scanf("%d", &num);
  printf("%dth Fibonacci number is %d.\n", num, Fibonacci(num)); 

  return 0;
}


#include <stdio.h>

int sum_recursion(int num)
{
  if (num == 0)
    return 0;
  return num + sum_recursion(num-1);
}

int main()
{
  int num;
  printf("Input a number: ");
  scanf("%d", &num);
  printf("Sum %d (inclusive) is %d\n", num, sum_recursion(num));

  return 0;
}


#include <stdio.h>

double avg(int x, int y)
{
  return (x + y)/2.0;
}

int main()
{
  int num1, num2;

  printf("Input two numbers(ex: 1 2): ");
  scanf("%d %d", &num1, &num2);
  printf("Average of %d and %d is %f.\n", num1, num2, avg(num1, num2));

  return 0;
}


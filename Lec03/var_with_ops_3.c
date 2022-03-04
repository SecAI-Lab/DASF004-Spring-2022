#include <stdio.h>

int main()
{
  // Check out why the following code has an error
  int intNum1 = 10;
  double doubleNum2 = 3;
  double doubleNum3 = intNum1 / doubleNum2;
  double doubleNum4 = intNum1 % doubleNum2;

  printf("%f\n", doubleNum3);
  printf("%lf\n", doubleNum4);

  return 0;
}

#include <stdio.h>

int func1(int num)
{
  return ++num;
}

void func2(int* num1, int* num2)
{
  *num1 = *num2;
}

void func3(int data[], int size)
{
  for(int i=0; i<size; i++)
    data[i] = data[i] - 1;
}

int main()
{
  int num1 = 1, num2 = 2, nums[] = {1,2,3};
  int ret = func1(num1);
  printf("%d\n", ret);

  func2(&num1, &num2);
  printf("%d\n", num1);

  func3(nums, 3);
  for(int i=0; i<3; i++)
    printf("%d ", nums[i]);
  puts("");

  return 0;
}


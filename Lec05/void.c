#include <stdio.h>

void foo()
{
  printf("foo\n");
}

void bar(void)
{
  printf("bar\n");
}

int main()
{
  foo();
  bar();

  return 0;
}

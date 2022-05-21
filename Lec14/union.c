#include <stdio.h>

union DATA {
  int a;
  double d;
};

int main(void) {
  union DATA data;

  printf("The size of union DATA: %ld\n", sizeof(union DATA));

  data.a = 10;
  printf("%d\n", data.a);

  data.d = 3.141592;
  printf("%lf\n", data.d);

  return 0;
}

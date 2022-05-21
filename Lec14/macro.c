#include <stdio.h>

#define SQUARE(x) ( (x) * (x) )
#define ABS(x) ( (x) > 0 ? (x) : -(x) )
#define HALF(x) ( (x) / 2 )
#define MAX(x,y) ( (x) > (y) ? (x) : (y) )
#define MIN(x,y) ( (x) < (y) ? (x) : (y) )

int main(void) {

  int x1 = 10, x2 = 20;
  double y = 1.2;
  float z = -3.9;
  
  // macro does not have type information
  printf("%d %.2f\n", SQUARE(x1), SQUARE(y));
  printf("%d %d\n", MAX(x1, x2), MIN(x1, x2));
  printf("%.2f %.2f\n", HALF(y), ABS(z));
  
  return 0;
}

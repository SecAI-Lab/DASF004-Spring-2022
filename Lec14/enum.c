#include <stdio.h>

int main(void) {
  enum Color {black, yellow, green, blue, red};
  enum Week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
  enum Color2 {black2, yellow2=3, green2, blue2=8, red2};

  enum Color c1;
  enum Color2 c2;

  c1 = yellow;
  c2 = yellow2;
  printf("%d (Color-yellow), %d (Color2-yellow2)\n", c1, c2);
  printf("Color2: %d %d %d %d %d\n", black2, yellow2, green2, blue2, red2);

  printf("Week: %d %d %d %d %d %d %d\n", Sun, Mon, Tue, Wed, Thu, Fri, Sat);
  return 0;
}

#include <stdio.h>

int main(void) {

  char str1[] = {'a', 'b', 'c', 'd', 'e', '\0'};
  char str2[] = "abcde";

  printf("Address of str1: %p  or %p\n", str1, &str1);
  printf("Address of str2: %p\n", str2);

  str1[1] = 'x';

  for (int i = 0; i < 5; i++) {
    printf("str1[%d]: %c (@%p)\n", i, str1[i], &str1[i]);
  }

  for (int i = 0; i < 5; i++) {
    printf("str2[%d]: %c (@%p)\n", i, str2[i], &str2[i]);
  }
  return 0;
}

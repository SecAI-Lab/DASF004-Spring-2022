#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[] = "aaa";
  char s2[] = "zzz";
  printf("%s, %s\n", s1 ,s2);
  printf("strcmp(a, b): %d\n", strcmp(s1, s2));

  char abcd[] = "abcd";
  char abce[] = "abce";
  printf("strncmp(abcd, abce, 4): %d\n", strncmp(abcd, abce, 4));

  abcd[2] = '\0';
  abce[2] = '\0';
  printf("strncmp(abcd, abce, 4): %d\n", strncmp(abcd, abce, 4));
  return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
  char s1[20];
  strcpy(s1, "blue");
  printf("%s (len:%lu, size:%lu)\n", s1, strlen(s1), sizeof(s1));
  strncpy(s1, "red", 4);
  printf("%s (len:%lu, size:%lu)\n", s1, strlen(s1), sizeof(s1));
  strcat(s1, "green");
  printf("%s (len:%lu, size:%lu)\n", s1, strlen(s1), sizeof(s1));

  return 0;
}


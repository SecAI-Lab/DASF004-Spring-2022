#include <stdio.h>

int main(void) {
  FILE * fp;
  char c;

  fp = fopen("alphabet.txt", "w");
  if (fp != NULL) {
    for (c = 'A'; c <= 'Z'; c++)
      fputc(c, fp);
    fclose(fp);
  }

  return 0;
}

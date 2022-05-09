#include <stdio.h>

int main()
{
  FILE* fp; 
  char str[20] = {}; 
  fp = fopen("example.txt", "r");

  if(fp == 0) {
    fprintf(stdout, "File not exists\n");
    return 0;
  }

  while (fscanf(fp, "%s", str) != EOF) 
    printf("%s\n", str);

  fclose(fp);

  return 0;
}


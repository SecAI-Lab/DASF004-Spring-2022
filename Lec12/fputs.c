#include <stdio.h>             
                               
int main() {
  FILE* fp;
  fp = fopen("example.txt", "w");

  if (fp == 0)
    return 0;                  

  for (int i = 0; i < 10; i++) 
    fputs("This is a fputs test.\n", fp);
  
  fclose(fp);  
  return 0;
} 


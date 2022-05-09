#include <stdio.h>

int main() {

  FILE* fp; 
  fp = fopen("example.txt", "w+");
  // check the "r" mode
  //fp = fopen("example.txt", "r+");

  if(fp == 0) {
    fprintf(stdout, "File not exists\n");
    return 0;
  }

  for(int i=0; i<10; i++)
    fprintf(fp, "[%d] fpritnf test\n", i); 

  fclose(fp);
  return 0;

}

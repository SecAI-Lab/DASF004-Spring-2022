#include <stdio.h>

int main()
{
  FILE *fp;
  int numbers[] = { 1,2,3,4,5 };
  int rets[5] = {0};

  fp = fopen("numbers_bytes.txt", "wb+");
  if (fp != 0) {
    fwrite(numbers, sizeof(int), sizeof(numbers)/sizeof(int), fp);
    rewind(fp);  

    fread(rets, sizeof(int), sizeof(rets)/sizeof(int), fp);
    for(int i=0; i<sizeof(rets)/sizeof(int); i++)
      printf("%d ", rets[i]);
    fclose(fp);
  }
  return 0;
}


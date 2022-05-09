#include <stdio.h>

int main()
{
  FILE *fp;
  int numbers[] = { 1,2,3,4,5 };

  fp = fopen("numbers_bytes.txt", "wb+");
  if (fp != 0) { // fp != 0
    for(int i=0; i<sizeof(numbers)/sizeof(int); i++)
      fwrite(numbers+i, sizeof(int), 1, fp);

    rewind(fp);
    int number = 0;
    while (fread(&number, sizeof(int), 1, fp))
      printf("%d ", number);
    puts("");
    
    fclose(fp);
  } // fp != 0
  
  return 0;
}


#include <stdio.h>

int main()
{
      int num = 0, sum = 0;
      for(int i = 0; i < 10; i++) {
            if( i % 3 == 0 )
                  continue;
            printf("%d ", i);
      }
      printf("\nContinue is used to skip printing multiples of 3.\n");
}


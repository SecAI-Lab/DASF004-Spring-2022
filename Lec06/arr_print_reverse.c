#include <stdio.h>
#define N 5

int main()
{
  int a[N], i;

  for (i = 0; i < N; i++)
      a[i] = 1;             // initializes a
    
  for (i = 0; i < N; i++)
      scanf("%d", &a[i]);   // reads data into a

  for (i=N-1; i >= 0; i--)
      printf("%d ", a[i]);

  printf("\n");

}

#include <stdio.h>

int main()
{
  int n = 45, *pn, **ppn;
  pn = &n;
  ppn = &pn;

  printf("*pn: %d\n",    *pn);
  printf("**ppn: %d\n", **ppn);
  printf("pn: %p\n",     pn);
  printf("ppn: %p\n",    ppn);

  return 0;
}

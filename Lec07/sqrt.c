#include <stdio.h>
#include <math.h>

int main()
{
   float num, root;
   printf("Enter a number: ");
   scanf("%f", &num);

   // Computes the square root of num and stores in root.
   root = sqrt(num);

   printf("Square root of %.2f = %.2f\n", num, root);
   return 0;
}


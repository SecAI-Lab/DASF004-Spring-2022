#include <stdio.h>

int main()
{
  int radius;
  float PI = 3.141592;
  float area;
  
  printf("Enter a radius: ");
  scanf("%d", &radius);
  
  area = PI * radius * radius;

  // %-5d means a left-justified format whereas %10f means a right-justified one
  // %.3f represents a conversion specifier where 3 specifies a precision 
  printf("The area of the circle with the radius ");
  printf("of <%-5d> is \"<%10.3f>\"\n", radius, area);

  return 0;
}
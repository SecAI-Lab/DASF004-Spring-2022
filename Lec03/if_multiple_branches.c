#include <stdio.h>
int main()
{
  float w, h;
  printf("Input your weight(kg) and height(cm): ");
  scanf("%f %f", &w, &h);
  float bmi = w / (h*h/10000);
  if (bmi < 18.8) printf("Maybe thin\n");
  else if (bmi >= 25) printf("Maybe overweight\n");
  else printf("Maybe normal\n");
}


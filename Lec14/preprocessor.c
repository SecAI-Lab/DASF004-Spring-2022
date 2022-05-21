#include <stdio.h>

#define and &&
#define or  ||
#define PRINT printf
#define USERV scanf

int main(void) {
  int credits;
  double gpa;

  PRINT("Enter your credits: ");
  USERV("%d", &credits);

  PRINT("Enter your gpa: ");
  USERV("%lf", &gpa);

  if ((credits >= 110 and gpa >= 3.0) or (credits >= 120 and gpa >= 2.9))
    PRINT("Good to go!\n");
  else
    PRINT("Nah, study more!\n");

  return 0;
}

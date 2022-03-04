#include <stdio.h>

int main()
{
  // Grading
  char grade;
  printf("Enter your grading [A-F]: ");
  scanf("%c", &grade);
  
  if(grade == 'A')
	printf("Grade: A\n");
  else if(grade == 'B')
	printf("Grade: B\n");
  else if(grade == 'C')
	printf("Grade: C\n");
  else if(grade == 'D')
	printf("Grade: D\n");
  else if(grade == 'F')
	printf("Grade: F\n");
  else
	printf("Wrong grading!\n");

  return 0;
}


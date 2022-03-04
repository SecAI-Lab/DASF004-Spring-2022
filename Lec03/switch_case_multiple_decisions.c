#include <stdio.h>

int main()
{
  // Grading
  char grade;
  printf("Enter your grading [A-F]: ");
  scanf("%c", &grade);
  
  switch(grade)
  {
	  case 'A':
	    printf("Grade: A\n");
      case 'B':
	    printf("Grade: B\n");
      case 'C':
	    printf("Grade: C\n");
      case 'D':
	    printf("Grade: D\n");
      case 'F':
	    printf("Grade: F\n");
	  default:
	    printf("Wrong grading!\n");
  }
  
  /* You may compare if-else statement with switch-case one.
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
  */

  return 0;
}


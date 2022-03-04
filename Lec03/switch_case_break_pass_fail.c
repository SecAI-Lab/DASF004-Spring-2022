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
      case 'B':
      case 'C':
      case 'D':
	    printf("Passed!\n");
		break;
      case 'F':
	    printf("Failed!\n");
		break;
	  default:
	    printf("Wrong grading!\n");
  }
  
  return 0;
}


// This program accepts users name and job,
// and print a short PR sentence.

#include <stdio.h>

int main()
{
  char name[20], job[30];
  int age;
  printf("Enter Your Name : ");
  scanf("%s", name);
  printf("Enter your age :");
  scanf("%d", &age);
  printf("Enter Your Job : ");
  scanf("%s", job);
  printf("My name is %s and %d years old\n", name, age);
  printf("and I’m a %s\n", job);  
  return 0;
}


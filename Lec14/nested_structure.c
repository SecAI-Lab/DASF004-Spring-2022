#include <stdio.h>
#include <string.h>

#define FIRST_NAME_LEN 10
#define LAST_NAME_LEN 10

struct person_name {
  char first[FIRST_NAME_LEN+1];
  char middle_initial;
  char last[LAST_NAME_LEN+1];
};

struct student {
  struct person_name name;
  int id, age;
  char gender;
};

void print_name(struct student s)
{
  printf("%s %c. %s\n", s.name.first, 
                        s.name.middle_initial, 
                        s.name.last);
}

int main(){  struct student st1;
  strncpy(st1.name.first, "Kevin", FIRST_NAME_LEN);
  st1.name.middle_initial = 'D';
  strncpy(st1.name.last, "Koo", LAST_NAME_LEN);

  print_name(st1);
  return 0;
}


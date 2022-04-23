#include <stdio.h>

int main() {

  char planets_array[9][8] = {"Mercury", "Venus", "Earth",
                            "Mars", "Jupiter", "Saturn",
                            "Uranus", "Neptune", "Pluto"};

  char *planets_ptr[9] = {"Mercury", "Venus", "Earth",
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};
 
  // Demonstration of a ragged array
  for(int i=0; i<9; i++) {
    printf("%s: %s\n", planets_ptr[i], planets_array[i]);
  }

  return 0;

}

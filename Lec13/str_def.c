#include <stdio.h>

int main(void) {
	char color[] = "blue";
	char* colorPtr = "blue";

	printf ("%s\n", color);
	printf ("%s\n", colorPtr);

	// color = "red";	// Error
	colorPtr = "red";

	printf ("%s\n", color);
	printf ("%s\n", colorPtr);

	color[0] = 'B';
	//colorPtr[0] = 'B'	// Error
	
	printf ("%s\n", color);
	printf ("%s\n", colorPtr);
	return 0;
}

#include <stdio.h>
void helloworld() { 
	printf("Hello, World!\n"); 
}

int main(void) {
	void (*fp)() = &helloworld;
	fp();
	return 0;
}


#include <stdio.h>

int main() {
	char sentence[100];
	printf("Enter a sentence: ");

	// The following will raise a warning because of an overflow risk
	// gets(sentence);

	fgets(sentence, sizeof(sentence), stdin);	// Use stdin for a keyboard input
	puts(sentence);
	return 0;
}


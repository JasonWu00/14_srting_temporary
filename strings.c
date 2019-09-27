#include <stdio.h>
#include <stdlib.h>

//here is where the string methods will be defined

int customStrlen(char *s) {
	//returns length of the string up to NULL
	int counter = 0; 
	while (*s != NULL) {
		counter++;
		s++;
	}
	return counter;
}

int customStrncpy(char *dest, char *source, size_t n) {
	//copies n chars of source to dest, and a NULL
	int counter = 0;
	int length = customStrlen(dest);
	printf("DEBUG: length should be 5, actually %i\n", length);
	for (counter = 0; counter < n; counter++) {
		*dest = *source;
		*dest++;
		*source++;
	}
	while (counter < length) {
		*dest++;
		counter++;
	}
	*dest = NULL;
	return 0;
}

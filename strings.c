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

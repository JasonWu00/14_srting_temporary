#include <stdio.h>
#include <stdlib.h>
//#include "strings.c"
#include "strings.h"
#include <string.h>

int main() {
	//for testing the custom made string methods
	printf("DEBUG\n");
	char first[6] = "Hello";
	int systemOutput = strlen(first); //expecting 5
	int customOutput = customStrlen(first); //also 5
	printf("TEST: System strlen returns %i, custom strlen returns %i\n", systemOutput, customOutput);
	
	char dest[6] = "ABCDE";
	char source[5] = "abcd";
	customStrncpy(dest, source, 3);
	printf("TEST: Expecting \"abcDE\", actually %s\n", dest);
}

#include <stdio.h>
#include "name_reverse.h"

void reverse_order(char* name) {
    char* firstChar = name; // Variable that holds first char in name
    char* lastChar = name; // Variable that will hold last char in name

    // Moves the char pointer to the last char in name
    while (*lastChar != '\0') {
	lastChar++;
    }	
    lastChar--; // Moves pointer to char right before '\0'

    // Swaps first and last char until the center is reached
    while(firstChar < lastChar) {
        char tempChar = *lastChar;
	*lastChar = *firstChar;
	*firstChar = tempChar;

	// Increments and decrements pointers memory address/index
	firstChar++;
	lastChar--;

    }

    printf("My name reversed is: %s\n", name);
}

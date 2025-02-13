#include <stdio.h>
#include "name_length.h"

void letter_count(const char* name) { // Explicitly prevents modifying original char arrary
    int counter = 0;
    const char *currentChar = name; // Tracks the current character

    // Iterates through the char array until '\0' is reached
    while (*currentChar != '\0') {
        if (*currentChar != ' ') {
	    counter++;
	}

	currentChar++; // Increments value to next memory address/index
    }

    printf("The length of my name is: %d characters\n", counter);
}

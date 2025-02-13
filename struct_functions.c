#include <stdio.h>
#include <string.h>
#include "state_struct.h"
#include "name_length.h"

void initializeStates(State* a, int numOfStates) {

	char* _stateNames[numOfStates] = { "Kentucky", "Tennessee", "Utah", "Georgia", "Maine",
							  "Mississippi", "Massachusetts", "Nevada", "California", "Pennsylvania"};

	// Copies the names into the state structs
	for (int i = 0; i < numOfStates; i++) {
		strcpy(a[i].stateName, _stateNames[i]);
	}

	// Initializes the length of the state name
	for (int i = 0; i < numOfStates; i++) {
		a[i].nameLength = letter_count(a[i].stateName);

	}
}

// Sorts states based on the length of their name
void sortStates(State* states, int numOfStates) {
	//Iterates through each struct
	for (int i = 0; i < numOfStates - 1; i++) {
		int shorterName = i;
		
		// Compares the value of nameLength member
		for (int j = i + 1; j < numOfStates; j++) {
			if (states[j].nameLength < states[shorterName].nameLength) {
				shorterName = j;
			}
		}

		// Swaps state structs
		if (shorterName != i) {
			State temp = states[i];
			states[i] = states[shorterName];
			states[shorterName] = temp;
		}

	}
}

// Searches for a state based on its name length
State* searchState(State* states, int numOfStates, int length) {
	// Iterates through the state strucs until it finds the matching length 
	for (int i = 0; i < numOfStates; i++) {
		if (states[i].nameLength == length) {
			return &states[i];
		}
	}
	return NULL;
}
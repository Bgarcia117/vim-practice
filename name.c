// Preprocessor directives
#include <stdio.h>
#include "name_reverse.h"
#include "name_length.h"
#include "state_struct.h"
#include "struct_functions.h"
#include "constants.h"

#define SWAP(a, b) do { int temp = (a); (a) = (b); (b) = temp; } while(0) // Swaps to integers

int main() {
    char myName[] = "Bryant Garcia";
    int a = 1;
    int b = 2;

    // Reverse order of name
    reverse_order(myName);
    printf("The length of my name is: %d characters\n", letter_count(myName));

    // Uses macro swap function
    printf("Integer values: a = %d, b = %d\n", a, b);
    SWAP(a,b);
    printf("Integer values after swap: a = %d, b = %d\n", a, b);

    // Declares and instantiates the array
    State stateArray[NUM_OF_STATES];
    initializeStates(stateArray, NUM_OF_STATES);
    

    // Sort States
    sortStates(stateArray, NUM_OF_STATES);
    printf("States sorted by name length:\n");
    for (int i = 0; i < NUM_OF_STATES; i++) {
        printf("%s\n", stateArray[i].stateName);
    }

    // State search by length:
    State* findState = searchState(stateArray, NUM_OF_STATES, 7);
    printf("State: %s (%d letters long)\n", findState->stateName, findState->nameLength);

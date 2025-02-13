// Preprocessor directives
#include <stdio.h>
#include "name_reverse.h"
#include "name_length.h"

#define SWAP(a, b) do { int temp = (a); (a) = (b); (b) = temp; } while(0)

int main() {
    char myName[] = "Bryant Garcia";
    int a = 1;
    int b = 2;

    reverse_order(myName);
    letter_count(myName);

    printf("Integer values: a = %d, b = %d", a, b);
    SWAP(a,b);
    printf("Integer values after swap: a = %d, b = %d", a, b);

    return 0;
}

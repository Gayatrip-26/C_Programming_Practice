#include <stdio.h>

int main() {
    int myInt, size;  // Declare an int variable
     size = sizeof(myInt);  // Get the size of int in bytes or we can use size_t without decalaring the size variable.

    printf("Size of int: %zu bytes\n", size);

    return 0;
}
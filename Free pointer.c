#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Memory allocation
    *ptr = 42;
    printf("Value: %d
", *ptr); // Prints: 42

    free(ptr); // Memory is deallocated

    // Now 'ptr' is a dangling pointer!
    printf("Value after free: %d
", *ptr); // Undefined behavior (dangling pointer)
    return 0;
}

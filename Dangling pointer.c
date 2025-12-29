#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Dynamically allocate memory
    ptr = (int *)malloc(sizeof(int));
    *ptr = 10;

    printf("Value before free: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);

    // Now ptr becomes a dangling pointer
    // Accessing it is undefined behavior
    printf("Value after free (dangling pointer): %d\n", *ptr);

    return 0;
}

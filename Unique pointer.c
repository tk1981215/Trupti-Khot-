#include <stdio.h>
#include <stdlib.h>

int main() {
    int *uniquePtr = (int *)malloc(sizeof(int));  // dynamically allocate memory
    
    if (uniquePtr == NULL) {
        printf("Memory allocation failed
");
        return 1;
    }
    
    *uniquePtr = 42;  // assign value using pointer
    printf("Value pointed to: %d
", *uniquePtr);
    
    free(uniquePtr);  // free allocated memory
    uniquePtr = NULL; // set pointer to NULL to avoid dangling pointer
    
    return 0;
}

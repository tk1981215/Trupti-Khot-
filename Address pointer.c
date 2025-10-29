#include <stdio.h>

int main() {
    int num = 42;        // Declare an integer variable
    int *ptr = &num;     // Pointer variable to hold the address of num

    // Print the value and the address of num using the pointer
    printf("Value of num: %d
", num);
    printf("Address of num: %p
", (void*)&num);
    printf("Address stored in ptr: %p
", (void*)ptr);
    printf("Value pointed to by ptr: %d
", *ptr);

    return 0;
}

#include <stdio.h>

int main() {
    int x = 10;           // normal integer variable
    int *ptr;             // pointer variable (can store address of int)

    ptr = &x;             // store address of x in ptr

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Pointer ptr stores: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);  // dereferencing

    // changing value of x using pointer
    *ptr = 20;
    printf("New value of x (after pointer update): %d\n", x);

    return 0;
}

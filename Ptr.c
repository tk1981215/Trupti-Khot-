#include <stdio.h>

int main() {
    int num = 10;       // normal integer variable
    int *ptr;           // pointer variable that stores address of int

    ptr = &num;         // store the address of num in ptr

    printf("Value of num: %d\n", num);          // prints value of num
    printf("Address of num: %p\n", &num);       // prints address of num
    printf("Value of ptr (address it stores): %p\n", ptr); // same as &num
    printf("Value pointed by ptr: %d\n", *ptr); // prints value at that address (10)

    *ptr = 20;          // change value at that address using pointer
    printf("New value of num: %d\n", num);      // num becomes 20

    return 0;
}

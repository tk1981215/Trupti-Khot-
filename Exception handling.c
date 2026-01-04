#include <stdio.h>
#include <setjmp.h>

jmp_buf env;   // stores environment for jump

void divide(int a, int b) {
    if (b == 0) {
        longjmp(env, 1);   // throw exception
    }
    printf("Result = %d\n", a / b);
}

int main() {
    if (setjmp(env) == 0) {
        // try block
        divide(10, 2);
        divide(10, 0);   // exception occurs here
        printf("This line will not execute\n");
    } else {
        // catch block
        printf("Exception caught: Division by zero!\n");
    }

    printf("Program continues...\n");
    return 0;
}

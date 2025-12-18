#include <stdio.h>

void change(int *x) {
    *x = 20;   // changes value at the address
}

int main() {
    int a = 10;

    printf("Before function call: a = %d\n", a);
    change(&a);   // passing address of a
    printf("After function call: a = %d\n", a);

    return 0;
}

#include <stdio.h>

void change(int x) {
    x = 20;   // change only affects local copy
}

int main() {
    int a = 10;

    printf("Before function call: a = %d\n", a);
    change(a);
    printf("After function call: a = %d\n", a);

    return 0;
}

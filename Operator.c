#include <stdio.h>

int main() {
    int a, b, c;

    // Simple assignment
    a = 10;   // assigns 10 to a
    b = 20;   // assigns 20 to b

    // Multiple assignment
    c = a = b;  // first a = b, then c = a

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);

    // Compound assignment operators
    a += 5;  // a = a + 5
    b -= 3;  // b = b - 3
    c *= 2;  // c = c * 2

    printf("\nAfter compound assignments:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}

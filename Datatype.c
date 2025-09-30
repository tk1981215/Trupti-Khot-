#include <stdio.h>
int main() {
    int i = 100;
    char ch = 'A';
    float f = 12.34;
    double d = 123.456;
    unsigned int u = 400;

    printf("int: %d\n", i);
    printf("char: %c\n", ch);
    printf("float: %.2f\n", f);
    printf("double: %.3lf\n", d);
    printf("unsigned int: %u\n", u);

    return 0;
}

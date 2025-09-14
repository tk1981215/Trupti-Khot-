#include <stdio.h>

int factorial(int n) {
    if (n == 0) {          // base case
        return 1;
    } else {
        return n * factorial(n - 1);   // recursive call
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2, sum;

    // Input first complex number
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f %f", &c2.real, &c2.imag);

    // Addition of complex numbers
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Output
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}

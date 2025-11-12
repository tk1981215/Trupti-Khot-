#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Engineering Calculator
");
    printf("======================
");
    printf("Select an operation:
");
    printf("1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
");
    printf("5. Sine (sin)
6. Cosine (cos)
7. Tangent (tan)
");
    printf("8. Exponentiation (pow)
9. Square Root (sqrt)
");
    printf("Enter your choice (1-9): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.6lf
", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.6lf
", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.6lf
", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.6lf
", result);
            } else {
                printf("Error: Division by zero
");
            }
            break;
        case 5:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);
            result = sin(num1 * M_PI / 180.0);
            printf("Sine: %.6lf
", result);
            break;
        case 6:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180.0);
            printf("Cosine: %.6lf
", result);
            break;
        case 7:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180.0);
            printf("Tangent: %.6lf
", result);
            break;
        case 8:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.6lf
", result);
            break;
        case 9:
            printf("Enter number: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Square Root: %.6lf
", result);
            } else {
                printf("Error: Negative number cannot have a real square root
");
            }
            break;
        default:
            printf("Invalid choice
");
    }

    return 0;
}

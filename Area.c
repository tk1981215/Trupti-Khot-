#include <stdio.h>
#include <math.h>   // for M_PI (value of π)

// Function prototypes
float areaCircle(float radius);
float areaRectangle(float length, float breadth);
float areaTriangle(float base, float height);

int main() {
    int choice;
    float radius, length, breadth, base, height;

    printf("---- AREA CALCULATOR ----\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            printf("Area of Circle = %.2f\n", areaCircle(radius));
            break;
        
        case 2:
            printf("Enter length and breadth of rectangle: ");
            scanf("%f %f", &length, &breadth);
            printf("Area of Rectangle = %.2f\n", areaRectangle(length, breadth));
            break;
        
        case 3:
            printf("Enter base and height of triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of Triangle = %.2f\n", areaTriangle(base, height));
            break;
        
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
float areaCircle(float radius) {
    return M_PI * radius * radius;
}

float areaRectangle(float length, float breadth) {
    return length * breadth;
}

float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

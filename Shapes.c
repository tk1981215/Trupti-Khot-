#include <stdio.h>

struct Shape {
    int type;       // 1 = Circle, 2 = Rectangle, 3 = Triangle
    float dim1;     // radius / length / base
    float dim2;     // width / height (if needed)
};

int main() {
    struct Shape shapes[3];
    int i;

    /* Input */
    for (i = 0; i < 3; i++) {
        printf("\nEnter shape type (1-Circle, 2-Rectangle, 3-Triangle): ");
        scanf("%d", &shapes[i].type);

        if (shapes[i].type == 1) {
            printf("Enter radius: ");
            scanf("%f", &shapes[i].dim1);
        } 
        else if (shapes[i].type == 2) {
            printf("Enter length and width: ");
            scanf("%f %f", &shapes[i].dim1, &shapes[i].dim2);
        } 
        else if (shapes[i].type == 3) {
            printf("Enter base and height: ");
            scanf("%f %f", &shapes[i].dim1, &shapes[i].dim2);
        }
    }

    /* Output */
    printf("\n--- Shape Details ---\n");
    for (i = 0; i < 3; i++) {
        if (shapes[i].type == 1) {
            printf("Circle Area: %.2f\n", 3.14 * shapes[i].dim1 * shapes[i].dim1);
        } 
        else if (shapes[i].type == 2) {
            printf("Rectangle Area: %.2f\n", shapes[i].dim1 * shapes[i].dim2);
        } 
        else if (shapes[i].type == 3) {
            printf("Triangle Area: %.2f\n", 0.5 * shapes[i].dim1 * shapes[i].dim2);
        }
    }

    return 0;
}

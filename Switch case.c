#include <stdio.h>

int main() {
    int num;
    printf("Enter a number (1-3): ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("You entered ONE.
");
            break;
        case 2:
            printf("You entered TWO.
");
            break;
        case 3:
            printf("You entered THREE.
");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 3.
");
            break;
    }
    return 0;
}

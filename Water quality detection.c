#include <stdio.h>

int main() {
    float pH;

    printf("Enter the pH value of water: ");
    scanf("%f", &pH);

    if (pH < 0 || pH > 14) {
        printf("Invalid pH value\n");
    }
    else if (pH < 7) {
        printf("Water is Acidic\n");
    }
    else if (pH == 7) {
        printf("Water is Neutral (Pure Water)\n");
    }
    else {
        printf("Water is Alkaline\n");
    }

    return 0;
}

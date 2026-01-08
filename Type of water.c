#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature of water (in Celsius): ");
    scanf("%f", &temp);

    if (temp <= 0) {
        printf("Water is in SOLID state (Ice)");
    } 
    else if (temp > 0 && temp < 100) {
        printf("Water is in LIQUID state");
    } 
    else {
        printf("Water is in GASEOUS state (Steam)");
    }

    return 0;
}

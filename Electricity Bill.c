#include <stdio.h>

int main() {
    int start_reading, end_reading;
    int units = 0;

    float electricity_consumption;
    float fixed_charge;
    float transmission_charge;
    float electricity_charge;
    float total = 0.0;

    printf("Enter starting reading : ");
    scanf("%d", &start_reading);

    printf("Enter ending reading   : ");
    scanf("%d", &end_reading);

    units = end_reading - start_reading;

    printf("Units consumed         : %d\n", units);

    printf("Enter electricity consumption charge : ");
    scanf("%f", &electricity_consumption);

    printf("Enter fixed charge : ");
    scanf("%f", &fixed_charge);

    printf("Enter transmission charge : ");
    scanf("%f", &transmission_charge);

    printf("Enter electricity charge : ");
    scanf("%f", &electricity_charge);

    total = electricity_consumption + fixed_charge +
            transmission_charge + electricity_charge;

    printf("Total Amount           : %.2f\n", total);

    return 0;
}

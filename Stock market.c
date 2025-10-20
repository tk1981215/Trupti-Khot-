#include <stdio.h>

// Function to calculate the Simple Moving Average (SMA)
float calculateSMA(float prices[], int n, int period) {
    float sum = 0.0;
    for(int i = n - period; i < n; i++) {
        sum += prices[i];
    }
    return sum / period;
}

int main() {
    int n, period;
    printf("Enter total number of days of data: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of days.
");
        return 1;
    }

    float prices[n];
    printf("Enter stock prices for %d days (space-separated):
", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &prices[i]);
    }

    printf("Enter moving average period (e.g., 3 or 5): ");
    scanf("%d", &period);

    if(period > n || period <= 0) {
        printf("Invalid period. Should be less than or equal to the number of days.
");
        return 1;
    }

    float sma = calculateSMA(prices, n, period);
    printf("Predicted next day price (using SMA) is: %.2f
", sma);

    return 0;
}

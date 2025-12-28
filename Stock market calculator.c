#include <stdio.h>

int main() {
    int quantity;
    float buy_price, sell_price;
    float investment, sell_value;
    float brokerage_rate = 0.5;   // 0.5%
    float tax_rate = 0.1;         // 0.1%
    float brokerage, tax;
    float profit_loss;

    printf("----- Stock Market Calculator -----\n");

    printf("Enter number of shares: ");
    scanf("%d", &quantity);

    printf("Enter buying price per share: ");
    scanf("%f", &buy_price);

    printf("Enter selling price per share: ");
    scanf("%f", &sell_price);

    investment = quantity * buy_price;
    sell_value = quantity * sell_price;

    brokerage = (brokerage_rate / 100) * sell_value;
    tax = (tax_rate / 100) * sell_value;

    profit_loss = sell_value - investment - brokerage - tax;

    printf("\n----- Result -----\n");
    printf("Total Investment : %.2f\n", investment);
    printf("Selling Value    : %.2f\n", sell_value);
    printf("Brokerage        : %.2f\n", brokerage);
    printf("Tax (STT)        : %.2f\n", tax);

    if (profit_loss > 0) {
        printf("Profit           : %.2f\n", profit_loss);
    } else if (profit_loss < 0) {
        printf("Loss             : %.2f\n", profit_loss);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}

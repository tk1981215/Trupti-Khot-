#include <stdio.h>
int main() {
    float costPrice, sellingPrice, amount;
    printf("Enter the Cost Price of the stock: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price of the stock: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit: %.2f
", amount);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss: %.2f
", amount);
    } else {
        printf("No Profit No Loss.
");
    }
    return 0;
}

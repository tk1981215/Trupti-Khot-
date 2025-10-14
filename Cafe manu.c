#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 5

typedef struct {
    char name[20];
    float price;
} MenuItem;

typedef struct {
    MenuItem item;
    int quantity;
} OrderItem;

MenuItem menu[MAX_ITEMS] = {
    {"Coffee", 2.50},
    {"Tea", 1.75},
    {"Sandwich", 5.00},
    {"Cake", 3.75},
    {"Juice", 2.00}
};

void displayMenu() {
    printf("Cafe Menu:
");
    for (int i = 0; i < MAX_ITEMS; i++) {
        printf("%d. %s - $%.2f
", i + 1, menu[i].name, menu[i].price);
    }
}

void takeOrder(OrderItem orders[], int *orderCount) {
    int choice, qty;
    *orderCount = 0;
    printf("Place your order (0 to stop):
");
    while (1) {
        printf("Enter item number: ");
        scanf("%d", &choice);
        if (choice == 0 || choice > MAX_ITEMS) break;

        printf("Enter quantity: ");
        scanf("%d", &qty);

        orders[*orderCount].item = menu[choice - 1];
        orders[*orderCount].quantity = qty;
        (*orderCount)++;
    }
}

void printBill(OrderItem orders[], int orderCount) {
    float total = 0;
    printf("
Bill Summary:
");
    for (int i = 0; i < orderCount; i++) {
        float itemTotal = orders[i].item.price * orders[i].quantity;
        printf("%s x%d = $%.2f
", orders[i].item.name, orders[i].quantity, itemTotal);
        total += itemTotal;
    }
    printf("Total Amount: $%.2f
", total);
}

int main() {
    OrderItem orders[20];
    int orderCount = 0;

    displayMenu();
    takeOrder(orders, &orderCount);
    printBill(orders, orderCount);

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    float price;
    int quantity;
} Item;

int main() {
    Item list[MAX_ITEMS];
    int n = 0;
    int choice;
    float total = 0.0f;

    while (1) {
        printf("
Shopping List Menu:
");
        printf("1. Add Item
");
        printf("2. View List
");
        printf("3. Calculate Total
");
        printf("4. Exit
");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (n < MAX_ITEMS) {
                printf("Enter item name: ");
                scanf("%s", list[n].name);
                printf("Enter price: ");
                scanf("%f", &list[n].price);
                printf("Enter quantity: ");
                scanf("%d", &list[n].quantity);
                n++;
                printf("Item added!
");
            } else {
                printf("List is full!
");
            }
        }
        else if (choice == 2) {
            printf("
Shopping List:
");
            printf("-------------------------------------------------
");
            printf("No.  Name           Price     Quantity
");
            for (int i = 0; i < n; i++) {
                printf("%-4d %-14s %-9.2f %-8d
", i+1, list[i].name, list[i].price, list[i].quantity);
            }
        }
        else if (choice == 3) {
            total = 0.0f;
            for (int i = 0; i < n; i++) {
                total += list[i].price * list[i].quantity;
            }
            printf("Total cost: %.2f
", total);
        }
        else if (choice == 4) {
            printf("Exiting...
");
            break;
        }
        else {
            printf("Invalid choice!
");
        }
    }
    return 0;
}

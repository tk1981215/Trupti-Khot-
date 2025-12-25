#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;

    printf("====== STATIONERY SHOP ======\n");
    printf("1. Pen       - Rs.10\n");
    printf("2. Pencil    - Rs.5\n");
    printf("3. Notebook  - Rs.50\n");
    printf("4. Eraser    - Rs.3\n");
    printf("5. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 1:
                total += qty * 10;
                break;
            case 2:
                total += qty * 5;
                break;
            case 3:
                total += qty * 50;
                break;
            case 4:
                total += qty * 3;
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    printf("\n-----------------------------");
    printf("\nTotal Bill Amount: Rs. %.2f", total);
    printf("\nThank you! Visit again 😊\n");

    return 0;
}

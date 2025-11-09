#include <stdio.h>

int main() {
    int choice;
    printf("-------- Hotel Menu --------
");
    printf("1. Idli - Rs 40
");
    printf("2. Dosa - Rs 50
");
    printf("3. Paneer Butter Masala - Rs 120
");
    printf("4. Fried Rice - Rs 100
");
    printf("5. Gulab Jamun - Rs 30
");
    printf("6. Tea - Rs 15
");
    printf("7. Coffee - Rs 20
");
    printf("----------------------------
");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    // Optional: Display selected item
    switch(choice) {
        case 1: printf("You selected Idli.
"); break;
        case 2: printf("You selected Dosa.
"); break;
        case 3: printf("You selected Paneer Butter Masala.
"); break;
        case 4: printf("You selected Fried Rice.
"); break;
        case 5: printf("You selected Gulab Jamun.
"); break;
        case 6: printf("You selected Tea.
"); break;
        case 7: printf("You selected Coffee.
"); break;
        default: printf("Invalid choice. Please select from 1 to 7.
");
    }
    return 0;
}

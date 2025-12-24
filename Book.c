#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
    int quantity;
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.book_id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("Enter Quantity: ");
    scanf("%d", &b.quantity);

    printf("\n--- Book Details ---\n");
    printf("ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
    printf("Quantity: %d\n", b.quantity);

    return 0;
}

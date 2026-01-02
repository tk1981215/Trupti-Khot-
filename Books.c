#include <stdio.h>
#include <string.h>

// Define structure
struct Book {
    int bookId;
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    // Display book details
    printf("\n--- Book Details ---\n");
    printf("Book ID   : %d\n", b.bookId);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);

    return 0;
}

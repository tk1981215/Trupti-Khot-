#include <stdio.h>
#include <string.h>

// Define structure for Book
struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

// Function to accept details of one book
void acceptBook(struct Book *b) {
    printf("Enter Book ID: ");
    scanf("%d", &b->id);
    getchar(); // to consume newline after number input

    printf("Enter Book Title: ");
    fgets(b->title, sizeof(b->title), stdin);
    b->title[strcspn(b->title, "\n")] = '\0'; // remove newline

    printf("Enter Book Author: ");
    fgets(b->author, sizeof(b->author), stdin);
    b->author[strcspn(b->author, "\n")] = '\0';

    printf("Enter Book Price: ");
    scanf("%f", &b->price);
}

// Function to display details of one book
void displayBook(struct Book b) {
    printf("\nBook ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];  // Array of structures

    // Accept details of all books
    for(int i = 0; i < n; i++) {
        printf("\n--- Enter details of Book %d ---\n", i+1);
        acceptBook(&books[i]);
    }

    // Display details of all books
    printf("\n======= Book Details =======\n");
    for(int i = 0; i < n; i++) {
        printf("\n--- Book %d ---\n", i+1);
        displayBook(books[i]);
    }

    return 0;
}

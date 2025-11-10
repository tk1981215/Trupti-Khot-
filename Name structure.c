#include <stdio.h>

struct Name {
    char first[30];
    char middle[30];
    char last[30];
};

int main() {
    struct Name person;

    // Input example
    printf("Enter first name: ");
    scanf("%29s", person.first);

    printf("Enter middle name: ");
    scanf("%29s", person.middle);

    printf("Enter last name: ");
    scanf("%29s", person.last);

    // Output example
    printf("Full Name: %s %s %s
", person.first, person.middle, person.last);

    return 0;
}

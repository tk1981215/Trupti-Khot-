#include <stdio.h>

// Define a simple structure called 'Person'
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1;

    // Input details for person1
    printf("Enter name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    printf("Enter age: ");
    scanf("%d", &person1.age);

    // Display the stored information
    printf("Name: %s", person1.name);
    printf("Age: %d
", person1.age);

    return 0;
}

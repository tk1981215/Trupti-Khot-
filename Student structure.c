#include <stdio.h>

// Define structure
struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;  // Declare a student variable

    // Taking input
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);

    printf("Enter Name: ");
    scanf("%s", s1.name);  // No & needed for strings

    printf("Enter Age: ");
    scanf("%d", &s1.age);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    // Displaying student details
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s1.rollNo);
    printf("Name   : %s\n", s1.name);
    printf("Age    : %d\n", s1.age);
    printf("Marks  : %.2f\n", s1.marks);

    return 0;
}

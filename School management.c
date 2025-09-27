#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Student
struct Student {
    int rollNo;
    char name[50];
    int age;
    char grade;
};

// Function to add a student
void addStudent() {
    FILE *fp = fopen("students.dat", "ab"); // append in binary
    struct Student s;

    printf("\nEnter Roll No: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter Grade (A/B/C/D): ");
    scanf(" %c", &s.grade);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("\n✅ Student record added successfully!\n");
}

// Function to display all students
void displayStudents() {
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;

    if (fp == NULL) {
        printf("\n⚠ No records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll No: %d | Name: %s | Age: %d | Grade: %c\n",
               s.rollNo, s.name, s.age, s.grade);
    }
    fclose(fp);
}

// Function to search student by roll number
void searchStudent() {
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;
    int roll, found = 0;

    if (fp == NULL) {
        printf("\n⚠ No records found!\n");
        return;
    }

    printf("\nEnter Roll No to search: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.rollNo == roll) {
            printf("\n✅ Student Found!\n");
            printf("Roll No: %d | Name: %s | Age: %d | Grade: %c\n",
                   s.rollNo, s.name, s.age, s.grade);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\n❌ Student with Roll No %d not found!\n", roll);
    }

    fclose(fp);
}

// Function to delete a student by roll number
void deleteStudent() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student s;
    int roll, found = 0;

    if (fp == NULL) {
        printf("\n⚠ No records found!\n");
        return;
    }

    printf("\nEnter Roll No to delete: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.rollNo != roll) {
            fwrite(&s, sizeof(s), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found)
        printf("\n✅ Student deleted successfully!\n");
    else
        printf("\n❌ Student with Roll No %d not found!\n", roll);
}

// Main menu
int main() {
    int choice;

    while (1) {
        printf("\n===== School Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: exit(0);
            default: printf("\n⚠ Invalid choice! Try again.\n");
        }
    }

    return 0;
}

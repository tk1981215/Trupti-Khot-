#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    char department[30];
    float salary;
};

/* Function to accept employee data */
void acceptEmployee(struct Employee *e) {
    printf("\nEnter Employee ID: ");
    scanf("%d", &e->empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e->name);

    printf("Enter Department: ");
    scanf(" %[^\n]", e->department);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

/* Function to display employee data */
void displayEmployee(struct Employee e) {
    printf("\n--- Employee Details ---\n");
    printf("ID         : %d\n", e.empId);
    printf("Name       : %s\n", e.name);
    printf("Department : %s\n", e.department);
    printf("Salary     : %.2f\n", e.salary);
}

int main() {
    struct Employee emp;
    int choice;

    do {
        printf("\n===== Employee Management =====");
        printf("\n1. Accept Employee Data");
        printf("\n2. Display Employee Data");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                acceptEmployee(&emp);
                break;

            case 2:
                displayEmployee(emp);
                break;

            case 3:
                printf("\nExiting program...");
                break;

            default:
                printf("\nInvalid choice!");
        }
    } while (choice != 3);

    return 0;
}

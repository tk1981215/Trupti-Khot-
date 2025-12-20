#include <stdio.h>

// Declare structure
struct Employee {
    int emp_id;
    char emp_name[50];
    float salary;
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", e.emp_name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    // Display employee details
    printf("\n--- Employee Details ---\n");
    printf("ID     : %d\n", e.emp_id);
    printf("Name   : %s\n", e.emp_name);
    printf("Salary : %.2f\n", e.salary);

    return 0;
}

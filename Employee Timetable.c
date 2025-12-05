#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct {
    char day[10];
    char task[100];
} Timetable;

typedef struct {
    int id;
    char name[50];
    Timetable week[6];   // Mon–Sat timetable
} Employee;

int main() {
    Employee emp[MAX];
    int n, i, j;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        // Days of the week
        char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

        printf("\nEnter weekly timetable (tasks):\n");

        for (j = 0; j < 6; j++) {
            strcpy(emp[i].week[j].day, days[j]);
            printf("%s: ", days[j]);
            scanf(" %[^\n]", emp[i].week[j].task);
        }
    }

    // Display timetable
    printf("\n\n===== Employee Timetable Summary =====\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("------ Weekly Timetable ------\n");

        for (j = 0; j < 6; j++) {
            printf("%s: %s\n", emp[i].week[j].day, emp[i].week[j].task);
        }
        printf("-----------------------------\n");
    }

    return 0;
}

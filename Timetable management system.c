#include <stdio.h>
#include <string.h>

#define MAX_DAYS 7
#define MAX_PERIODS 8
#define MAX_SUBJECT_LEN 30

const char *days[MAX_DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

typedef struct {
    char subject[MAX_SUBJECT_LEN];
} Period;

typedef struct {
    Period periods[MAX_PERIODS];
} Day;

typedef struct {
    Day timetable[MAX_DAYS];
} Timetable;

void enterTimetable(Timetable *tt) {
    for (int i = 0; i < MAX_DAYS; i++) {
        printf("Entering timetable for %s:
", days[i]);
        for (int j = 0; j < MAX_PERIODS; j++) {
            printf("  Enter subject for period %d: ", j + 1);
            scanf(" %[^
]", tt->timetable[i].periods[j].subject);
        }
    }
}

void displayTimetable(const Timetable *tt) {
    printf("
----- Weekly Timetable -----
");
    for (int i = 0; i < MAX_DAYS; i++) {
        printf("%s:
", days[i]);
        for (int j = 0; j < MAX_PERIODS; j++) {
            printf("  Period %d: %s
", j + 1, tt->timetable[i].periods[j].subject);
        }
        printf("
");
    }
}

int main() {
    Timetable tt;
    int choice;
    while (1) {
        printf("------- Timetable Management System -------
");
        printf("1. Enter Timetable
2. Display Timetable
3. Exit
Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enterTimetable(&tt);
                break;
            case 2:
                displayTimetable(&tt);
                break;
            case 3:
                printf("Exiting...
");
                return 0;
            default:
                printf("Invalid choice. Please try again.
");
        }
    }
    return 0;
}

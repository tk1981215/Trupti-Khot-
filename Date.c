#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

/* Function declarations */
void acceptDate(struct Date *d);
void displayDate(struct Date d);
int isLeapYear(int year);
int isValidDate(struct Date d);

int main() {
    struct Date d;
    int choice;

    do {
        printf("\n----- DATE MENU -----\n");
        printf("1. Accept Date\n");
        printf("2. Display Date\n");
        printf("3. Check Leap Year\n");
        printf("4. Validate Date\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                acceptDate(&d);
                break;

            case 2:
                displayDate(d);
                break;

            case 3:
                if (isLeapYear(d.year))
                    printf("Year %d is a Leap Year\n", d.year);
                else
                    printf("Year %d is NOT a Leap Year\n", d.year);
                break;

            case 4:
                if (isValidDate(d))
                    printf("Date is Valid\n");
                else
                    printf("Date is Invalid\n");
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}

/* Function definitions */

void acceptDate(struct Date *d) {
    printf("Enter day: ");
    scanf("%d", &d->day);
    printf("Enter month: ");
    scanf("%d", &d->month);
    printf("Enter year: ");
    scanf("%d", &d->year);
}

void displayDate(struct Date d) {
    printf("Date: %02d/%02d/%d\n", d.day, d.month, d.year);
}

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int isValidDate(struct Date d) {
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1)
        return 0;

    if (isLeapYear(d.year) && d.month == 2)
        daysInMonth[1] = 29;

    if (d.day > daysInMonth[d.month - 1])
        return 0;

    return 1;
}

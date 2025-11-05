#include <stdio.h>

int year;
int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char *months[] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
const char *weekdays = "Su Mo Tu We Th Fr Sa";

int isLeapYear(int y) {
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

int getStartDay(int y) {
    int d = 1, m = 1; // 1 Jan
    int y0 = y - 1;
    // Zeller's congruence or similar formula to find weekday of 1/1/y
    int start = (y0 + y0/4 - y0/100 + y0/400 + 1) % 7;
    return start;
}

void printMonth(int month, int startDay) {
    printf("
  ------------%s-------------
", months[month]);
    printf("%s
", weekdays);

    int day, i;
    for (i = 0; i < startDay; i++) {
        printf("   "); // spaces for starting offset
    }
    int days = days_in_month[month];
    if(month == 1 && isLeapYear(year)) days = 29; // February leap year check

    for (day = 1; day <= days; day++) {
        printf("%2d ", day);
        if ((day + startDay) % 7 == 0) printf("
");
    }
    printf("
");
}

int main() {
    printf("Enter year: ");
    scanf("%d", &year);
    int startDay = getStartDay(year);
    for(int month = 0; month < 12; month++) {
        printMonth(month, startDay);
        int days = days_in_month[month];
        if(month == 1 && isLeapYear(year)) days = 29;
        startDay = (startDay + days) % 7;
    }
    return 0;
}

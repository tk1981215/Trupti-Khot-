#include <stdio.h>

#define DAYS 5       // Monday to Friday
#define SLOTS 6      // Number of periods per day

// Structure for a timetable entry
typedef struct {
    char subject[30];
    char room[10];
} TimetableEntry;

int main() {
    // Array of timetable entries for each day and slot
    TimetableEntry timetable[DAYS][SLOTS] = {
        {{"Maths", "101"}, {"Physics", "102"}, {"Chemistry", "103"}, {"English", "104"}, {"CS", "105"}, {"Lab", "106"}},  // Monday
        {{"Data Structures", "201"}, {"Maths", "101"}, {"Physics", "102"}, {"CS", "105"}, {"English", "104"}, {"Lab", "106"}},  // Tuesday
        {{"DBMS", "301"}, {"Operating Sys", "302"}, {"Maths", "101"}, {"Physics", "102"}, {"CS", "105"}, {"Lab", "106"}},  // Wednesday
        {{"Maths", "101"}, {"Data Structures", "201"}, {"DBMS", "301"}, {"Operating Sys", "302"}, {"English", "104"}, {"Lab", "106"}},  // Thursday
        {{"Physics", "102"}, {"Chemistry", "103"}, {"CS", "105"}, {"Data Structures", "201"}, {"Operating Sys", "302"}, {"Lab", "106"}}   // Friday
    };

    // Print timetable
    char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    for (int i = 0; i < DAYS; i++) {
        printf("%s:
", days[i]);
        for (int j = 0; j < SLOTS; j++) {
            printf("  Slot %d: %s in room %s
", j+1, timetable[i][j].subject, timetable[i][j].room);
        }
        printf("
");
    }

    return 0;
}

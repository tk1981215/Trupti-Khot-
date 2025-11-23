#include <stdio.h>
#include <string.h>

#define MAX_SUBJECTS 20
#define MAX_SLOTS 10

int main() {
    int n, m;
    char subjects[MAX_SUBJECTS][50];
    int slot[MAX_SUBJECTS];

    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    printf("Enter the maximum number of slots: ");
    scanf("%d", &m);

    // Read subject names
    for(int i = 0; i < n; i++) {
        printf("Enter subject name %d: ", i + 1);
        scanf("%s", subjects[i]);
    }

    // Assign slots (simple round robin assignment)
    for(int i = 0; i < n; i++) {
        slot[i] = (i % m) + 1;
    }

    // Display the timetable
    printf("
Exam Timetable:
");
    printf("Subject\t\tSlot
");
    for(int i = 0; i < n; i++) {
        printf("%s\t\t%d
", subjects[i], slot[i]);
    }

    return 0;
}

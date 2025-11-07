#include <stdio.h>

#define MAX_SUBJECTS 5
#define MAX_NAME_LENGTH 50

int main() {
    char subjects[MAX_SUBJECTS][MAX_NAME_LENGTH];
    int marks[MAX_SUBJECTS];
    int i;

    printf("Enter the names and marks of %d subjects:
", MAX_SUBJECTS);
    for (i = 0; i < MAX_SUBJECTS; i++) {
        printf("Subject %d name: ", i + 1);
        scanf("%s", subjects[i]);  // For simplicity, assumes single-word subject names
        printf("Marks for %s: ", subjects[i]);
        scanf("%d", &marks[i]);
    }

    printf("
Entered subjects and marks:
");
    for (i = 0; i < MAX_SUBJECTS; i++) {
        printf("%s: %d
", subjects[i], marks[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {         // Controls number of rows
        for (int j = 1; j <= i; j++) {     // Prints pattern in each column
            printf("%d ", j % 2);          // Alternates 1 and 0
        }
        printf("
");
    }
    return 0;
}

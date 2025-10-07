#include <stdio.h>

int main() {
    // Declare an array of strings (2D character array)
    char fruits[5][20] = {"Apple", "Banana", "Mango", "Grapes", "Orange"};
    int i;

    printf("List of Fruits:\n");
    for(i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, fruits[i]);
    }

    return 0;
}

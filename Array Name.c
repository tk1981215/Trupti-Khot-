#include <stdio.h>

int main() {
    // Array of strings (array of char arrays)
    char names[5][20] = {
        "Alice",
        "Bob",
        "Charlie",
        "David",
        "Eve"
    };

    // Print all names
    for(int i = 0; i < 5; i++) {
        printf("Name %d: %s
", i + 1, names[i]);
    }

    return 0;
}

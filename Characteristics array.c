#include <stdio.h>
#include <string.h>

// Structure definition for a flower
struct Flower {
    char name[30];
    char color[20];
    int petals;
};

int main() {
    // Array of 3 flower structures
    struct Flower flowers[3];

    // Initializing flower data
    strcpy(flowers[0].name, "Rose");
    strcpy(flowers[0].color, "Red");
    flowers[0].petals = 32;

    strcpy(flowers[1].name, "Lily");
    strcpy(flowers[1].color, "White");
    flowers[1].petals = 6;

    strcpy(flowers[2].name, "Sunflower");
    strcpy(flowers[2].color, "Yellow");
    flowers[2].petals = 50;

    // Print flower characteristics
    for (int i = 0; i < 3; i++) {
        printf("Flower %d:
", i + 1);
        printf("Name: %s
", flowers[i].name);
        printf("Color: %s
", flowers[i].color);
        printf("Number of Petals: %d

", flowers[i].petals);
    }

    return 0;
}

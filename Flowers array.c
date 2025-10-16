#include <stdio.h>

int main() {
    // Array of flower names
    char *flowers[] = {"Rose", "Lily", "Tulip", "Daisy", "Sunflower"};

    int n = sizeof(flowers) / sizeof(flowers[0]);
    
    printf("List of Flowers:
");
    for (int i = 0; i < n; i++) {
        printf("%s
", flowers[i]);
    }

    return 0;
}

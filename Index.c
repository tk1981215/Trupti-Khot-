#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array elements with their indexes:\n");

    for (int i = 0; i < 5; i++) {
        printf("Index %d -> Value %d\n", i, arr[i]);
    }

    // Trying to access index 5 (out of range)
    printf("\nAccessing arr[5] (invalid): %d\n", arr[5]); 

    return 0;
}

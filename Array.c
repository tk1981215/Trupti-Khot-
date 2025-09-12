#include <stdio.h>

int main() {
    int n, i;

    // Ask user for size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

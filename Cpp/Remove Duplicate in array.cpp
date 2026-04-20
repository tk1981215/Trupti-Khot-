#include <iostream>
#include <algorithm>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    sort(arr, arr + n);

    int j = 0; // index for unique elements

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // new size
}

int main() {
    int arr[] = {4, 2, 5, 2, 3, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
}

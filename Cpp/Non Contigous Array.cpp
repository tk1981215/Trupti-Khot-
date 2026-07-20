#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;

    // Allocate array of row pointers
    int **arr = new int*[rows];

    // Allocate each row separately
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Input
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    cout << "\nArray:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

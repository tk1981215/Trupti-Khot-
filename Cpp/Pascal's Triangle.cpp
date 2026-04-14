#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        // Print spaces for alignment
        for (int space = 0; space < n - i - 1; space++) {
            cout << " ";
        }

        int num = 1;

        // Print numbers in row
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);  // Formula for next value
        }

        cout << endl;
    }

    return 0;
}

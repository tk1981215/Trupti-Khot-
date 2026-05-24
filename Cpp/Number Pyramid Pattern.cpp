#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {

        // Inner loop for printing numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int fib[100];  // assuming max size 100

    // First two terms
    fib[0] = 0;
    fib[1] = 1;

    // Generate Fibonacci sequence
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print in reverse order
    cout << "Reverse Fibonacci sequence: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << fib[i] << " ";
    }

    return 0;
}

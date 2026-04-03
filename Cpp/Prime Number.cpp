#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        int isPrime = 1;  // assume number is prime

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }

        if (isPrime == 1) {
            cout << i << " ";
        }
    }

    return 0;
}

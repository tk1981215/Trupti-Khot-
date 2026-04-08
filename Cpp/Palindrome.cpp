#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    // Check palindrome
    if (original == reverse) {
        cout << "Palindrome number";
    } else {
        cout << "Not a palindrome number";
    }

    return 0;
}

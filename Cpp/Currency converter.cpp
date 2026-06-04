#include <iostream>
using namespace std;

int main() {
    double amount, convertedAmount;
    int choice;

    cout << "Currency Converter\n";
    cout << "1. INR to USD\n";
    cout << "2. USD to INR\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> amount;

    if (choice == 1) {
        convertedAmount = amount / 83.0; // 1 USD = 83 INR
        cout << "Converted Amount = $" << convertedAmount;
    }
    else if (choice == 2) {
        convertedAmount = amount * 83.0;
        cout << "Converted Amount = ₹" << convertedAmount;
    }
    else {
        cout << "Invalid Choice!";
    }

    return 0;
}

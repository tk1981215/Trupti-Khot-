#include <iostream>
using namespace std;

class ATM {
private:
    int pin;
    double balance;

public:
    // Constructor
    ATM() {
        pin = 1234;       // Default PIN
        balance = 10000;  // Initial Balance
    }

    // PIN verification
    bool checkPin() {
        int enteredPin;

        cout << "Enter ATM PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            return true;
        } else {
            cout << "Wrong PIN!\n";
            return false;
        }
    }

    // Display menu
    void menu() {
        int choice;
        double amount;

        do {
            cout << "\n===== ATM MENU =====\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {

            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Money Deposited Successfully!\n";
                    cout << "Updated Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid Amount!\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid Amount!\n";
                }
                else if (amount > balance) {
                    cout << "Insufficient Balance!\n";
                }
                else {
                    balance -= amount;
                    cout << "Please collect your cash.\n";
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank You for using ATM!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
            }

        } while (choice != 4);
    }
};

int main() {
    ATM user;

    if (user.checkPin()) {
        user.menu();
    }

    return 0;
}

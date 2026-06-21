#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Addition = " << num1 + num2;
            break;

        case 2:
            cout << "Subtraction = " << num1 - num2;
            break;

        case 3:
            cout << "Multiplication = " << num1 * num2;
            break;

        case 4:
            if(num2 != 0)
                cout << "Division = " << (float)num1 / num2;
            else
                cout << "Division by zero is not possible";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}

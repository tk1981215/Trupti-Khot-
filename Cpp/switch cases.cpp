#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "===== MENU =====\n";
    cout << "1. Simple Input-Output\n";
    cout << "2. Arithmetic Operations\n";
    cout << "3. Data Types Exploration\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {

        case 1: {
            string name;
            int age;

            cin.ignore(); // to clear buffer

            cout << "\nEnter student name: ";
            getline(cin, name);

            cout << "Enter age: ";
            cin >> age;

            cout << "\n--- Student Details ---\n";
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            break;
        }

        case 2: {
            int a, b;

            cout << "\nEnter two integers: ";
            cin >> a >> b;

            cout << "\n--- Results ---\n";
            cout << "Sum = " << a + b << endl;
            cout << "Difference = " << a - b << endl;
            cout << "Product = " << a * b << endl;

            if (b != 0)
                cout << "Quotient = " << a / b << endl;
            else
                cout << "Quotient = Division by zero not allowed" << endl;

            break;
        }

        case 3: {
            int i;
            float f;
            char ch;
            bool b;

            cout << "\nEnter an integer: ";
            cin >> i;

            cout << "Enter a float: ";
            cin >> f;

            cout << "Enter a character: ";
            cin >> ch;

            cout << "Enter a boolean (0 or 1): ";
            cin >> b;

            cout << "\n--- Entered Values ---\n";
            cout << "Integer: " << i << endl;
            cout << "Float: " << f << endl;
            cout << "Character: " << ch << endl;
            cout << "Boolean: " << b << endl;

            break;
        }

        default:
            cout << "\nInvalid choice!";
    }

    return 0;
}

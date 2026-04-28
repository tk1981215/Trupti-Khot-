#include <iostream>
using namespace std;

// ================= OPERATOR OVERLOADING =================
class Complex {
    float real, imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload == operator
    bool operator == (Complex c) {
        return (real == c.real && imag == c.imag);
    }

    // Overload << operator (friend function)
    friend ostream& operator << (ostream &out, Complex c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

// ================= FUNCTION TEMPLATE =================
template <class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

// ================= CLASS TEMPLATE =================
template <class T>
class Calculator {
    T num1, num2;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void add() {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void multiply() {
        cout << "Multiplication = " << num1 * num2 << endl;
    }
};

// ================= MAIN MENU =================
int main() {
    int choice;

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Operator Overloading (+, ==, <<)\n";
        cout << "2. Function Template (Find Maximum)\n";
        cout << "3. Class Template (Calculator)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            Complex c1, c2, result;
            float r, i;

            cout << "\nEnter first complex number (real imag): ";
            cin >> r >> i;
            c1 = Complex(r, i);

            cout << "Enter second complex number (real imag): ";
            cin >> r >> i;
            c2 = Complex(r, i);

            result = c1 + c2;

            cout << "\nSum = " << result << endl;

            if (c1 == c2)
                cout << "Both complex numbers are equal\n";
            else
                cout << "Complex numbers are NOT equal\n";

            break;
        }

        case 2: {
            int a, b;
            float x, y;

            cout << "\nEnter two integers: ";
            cin >> a >> b;
            cout << "Maximum (int) = " << findMax(a, b) << endl;

            cout << "Enter two floats: ";
            cin >> x >> y;
            cout << "Maximum (float) = " << findMax(x, y) << endl;

            break;
        }

        case 3: {
            int typeChoice;

            cout << "\nChoose Data Type:\n";
            cout << "1. Integer\n2. Float\nEnter choice: ";
            cin >> typeChoice;

            if (typeChoice == 1) {
                Calculator<int> c;
                c.input();
                c.add();
                c.multiply();
            } else {
                Calculator<float> c;
                c.input();
                c.add();
                c.multiply();
            }

            break;
        }

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}

#include <iostream>
using namespace std;

/* ---------- Problem 1: Basic Functions ---------- */
void accept(int &a, int &b) {
    cout << "Enter two integers: ";
    cin >> a >> b;
}

int sum(int a, int b) {
    return a + b;
}

void display(int result) {
    cout << "Sum = " << result << endl;
}

/* ---------- Problem 2: Call by Value ---------- */
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside function (Call by Value): a = " << a << ", b = " << b << endl;
}

/* ---------- Problem 2: Call by Reference ---------- */
void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside function (Call by Reference): a = " << a << ", b = " << b << endl;
}

/* ---------- Problem 3: Inline Function ---------- */
inline int square(int x) {
    return x * x;
}

inline int cube(int x) {
    return x * x * x;
}

/* ---------- Problem 4: Recursive Factorial ---------- */
int factorial(int n) {
    if (n == 0 || n == 1)   // Base condition
        return 1;
    else                    // Recursive case
        return n * factorial(n - 1);
}

/* ---------- Problem 4: Recursive Fibonacci ---------- */
int fibonacci(int n) {
    if (n <= 1)   // Base condition
        return n;
    else          // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
}

/* ---------- MAIN FUNCTION ---------- */
int main() {
    int choice;

    do {
        cout << "\n===== EXPERIMENT 3 MENU =====\n";
        cout << "1. Basic Function (Sum)\n";
        cout << "2. Call by Value vs Call by Reference\n";
        cout << "3. Inline Function (Square & Cube)\n";
        cout << "4. Recursive Function\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            int a, b, result;
            accept(a, b);
            result = sum(a, b);
            display(result);
            break;
        }

        case 2: {
            int x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;

            cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

            swapValue(x, y);
            cout << "After Call by Value: x = " << x << ", y = " << y << endl;

            swapReference(x, y);
            cout << "After Call by Reference: x = " << x << ", y = " << y << endl;

            break;
        }

        case 3: {
            int num, ch;
            cout << "Enter a number: ";
            cin >> num;

            cout << "1. Square\n2. Cube\nChoose: ";
            cin >> ch;

            if (ch == 1)
                cout << "Square = " << square(num) << endl;
            else if (ch == 2)
                cout << "Cube = " << cube(num) << endl;
            else
                cout << "Invalid choice!\n";

            break;
        }

        case 4: {
            int ch, n;
            cout << "1. Factorial\n2. Fibonacci Series\nChoose: ";
            cin >> ch;

            if (ch == 1) {
                cout << "Enter number: ";
                cin >> n;
                cout << "Factorial = " << factorial(n) << endl;
            }
            else if (ch == 2) {
                cout << "Enter number of terms: ";
                cin >> n;
                cout << "Fibonacci Series: ";
                for (int i = 0; i < n; i++) {
                    cout << fibonacci(i) << " ";
                }
                cout << endl;
            }
            else {
                cout << "Invalid choice!\n";
            }

            break;
        }

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

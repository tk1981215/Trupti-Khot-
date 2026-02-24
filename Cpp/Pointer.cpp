#include <iostream>
using namespace std;

int main() {
    int a = 10;      // normal variable
    int *ptr;        // pointer declaration

    ptr = &a;        // storing address of a in pointer

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;

    return 0;
}

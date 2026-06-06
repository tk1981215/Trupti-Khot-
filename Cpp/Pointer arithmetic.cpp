#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Pointer Arithmetic Demonstration\n";

    cout << "Initial Address: " << ptr << endl;
    cout << "Initial Value: " << *ptr << endl;

    ptr++;   // Move to next element
    cout << "\nAfter ptr++" << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    ptr++;   // Move again
    cout << "\nAfter another ptr++" << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    ptr--;   // Move back
    cout << "\nAfter ptr--" << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    return 0;
}

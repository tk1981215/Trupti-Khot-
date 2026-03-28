#include <iostream>
using namespace std;

int main() {
    string str = "Hello";
    string *ptr = &str;   // pointer to string

    cout << "String: " << str << endl;
    cout << "Using pointer: " << *ptr << endl;

    return 0;
}

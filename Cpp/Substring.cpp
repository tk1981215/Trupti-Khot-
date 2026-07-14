#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "HelloWorld";

    string sub = str.substr(0, 5);

    cout << sub;

    return 0;
}

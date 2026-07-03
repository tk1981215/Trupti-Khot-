#include <iostream>
using namespace std;

int main() {
    int num, square, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    int temp = square;

    while (temp > 0) {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (sum == num)
        cout << num << " is a Neon Number." << endl;
    else
        cout << num << " is not a Neon Number." << endl;

    return 0;
}

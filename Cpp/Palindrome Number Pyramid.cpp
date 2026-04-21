#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // increasing numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        // decreasing numbers
        for(int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

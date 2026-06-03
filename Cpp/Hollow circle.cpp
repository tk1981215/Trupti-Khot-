#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r = 10; // Radius

    for (int i = -r; i <= r; i++) {
        for (int j = -r; j <= r; j++) {
            double distance = sqrt(i * i + j * j);

            if (distance >= r - 0.5 && distance <= r + 0.5)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "Value: " << arr[i]
             << " Address: " << &arr[i] << endl;
    }

    return 0;
}

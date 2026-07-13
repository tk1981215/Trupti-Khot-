#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string result = "";

    for (int i = 0; i < str.length(); i++) {
        bool found = false;

        // Check if character is already in result
        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            result += str[i];
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}

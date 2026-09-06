#include <iostream>
#include <string>
using namespace std;

int main() {

    string fruits = "Apple Banana Mango Orange";

    // 1. Print the string
    cout << "Fruits: " << fruits << endl;

    // 2. Find length
    cout << "Length: " << fruits.length() << endl;

    // 3. Access a character
    cout << "First character: " << fruits[0] << endl;

    // 4. Add a fruit at the end
    fruits.append(" Grapes");
    cout << "After adding Grapes: " << fruits << endl;

    // 5. Add a fruit using +
    fruits = fruits + " Papaya";
    cout << "After adding Papaya: " << fruits << endl;

    // 6. Find a fruit
    int position = fruits.find("Mango");

    if (position != string::npos) {
        cout << "Mango found at index: " << position << endl;
    }

    // 7. Get a substring
    string part = fruits.substr(0, 5);
    cout << "Substring: " << part << endl;

    // 8. Compare strings
    string fruit1 = "Apple";
    string fruit2 = "Apple";

    if (fruit1 == fruit2) {
        cout << "Both fruits are same" << endl;
    }

    // 9. Change a character
    fruits[0] = 'a';
    cout << "After changing first character: " << fruits << endl;

    // 10. Erase characters
    fruits.erase(0, 5);
    cout << "After erase: " << fruits << endl;

    return 0;
}

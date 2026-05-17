#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        // Count word when character is not space
        // and next character is space or end of string
        if (sentence[i] != ' ' &&
           (sentence[i + 1] == ' ' || sentence[i + 1] == '\0')) {
            count++;
        }
    }

    cout << "Number of words = " << count;

    return 0;
}

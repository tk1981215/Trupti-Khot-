#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    vector<string> words;
    string word;

    // Split the sentence into words
    stringstream ss(str);
    while (ss >> word) {
        words.push_back(word);
    }

    // Print words in reverse order
    cout << "Reversed sentence: ";
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i];
        if (i != 0)
            cout << " ";
    }

    return 0;
}

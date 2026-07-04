#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    vector<string> words;
    string word;

    // Store each word in the vector
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

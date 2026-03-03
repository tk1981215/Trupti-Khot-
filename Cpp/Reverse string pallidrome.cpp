#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    string original = s;      // store original
    reverse(s.begin(), s.end());  // reverse string
    
    return original == s;     // compare
}

int main() {
    string str;
    getline(cin, str);

    if(isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}

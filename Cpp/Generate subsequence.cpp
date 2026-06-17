#include <iostream>
using namespace std;

void subsequence(string s, string ans, int i) {
    if (i == s.length()) {
        cout << ans << endl;
        return;
    }

    // Include current character
    subsequence(s, ans + s[i], i + 1);

    // Exclude current character
    subsequence(s, ans, i + 1);
}

int main() {
    string s = "ABC";
    subsequence(s, "", 0);
    return 0;
}

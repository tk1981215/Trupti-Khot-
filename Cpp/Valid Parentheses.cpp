#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            // If stack is empty, closing bracket has no match
            if (st.empty())
                return false;

            // Check matching brackets
            if ((ch == ')' && st.top() == '(') ||
                (ch == '}' && st.top() == '{') ||
                (ch == ']' && st.top() == '[')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    // Stack should be empty if all brackets matched
    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValid(s))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Voter {
    string name, dob, address;
};

vector<Voter> voters;

// ---------------- NORMALIZE ----------------
string normalize(string s) {
    for (char &c : s) c = tolower(c);
    return s;
}

// ---------------- SOUNDEX ----------------
string soundex(string s) {
    if (s.empty()) return "";

    s = normalize(s);
    string code = "";
    code += toupper(s[0]);

    for (int i = 1; i < s.length(); i++) {
        char c = s[i];

        if (c=='b'||c=='f'||c=='p'||c=='v') code += '1';
        else if (c=='c'||c=='g'||c=='j'||c=='k'||c=='q'||c=='s'||c=='x'||c=='z') code += '2';
        else if (c=='d'||c=='t') code += '3';
        else if (c=='l') code += '4';
        else if (c=='m'||c=='n') code += '5';
        else if (c=='r') code += '6';
    }

    while (code.length() < 4) code += '0';
    return code.substr(0, 4);
}

// ---------------- LEVENSHTEIN ----------------
int levenshtein(string a, string b) {
    int m = a.length(), n = b.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1));

    for (int i = 0; i <= m; i++) dp[i][0] = i;
    for (int j = 0; j <= n; j++) dp[0][j] = j;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (tolower(a[i-1]) == tolower(b[j-1]))
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min(dp[i-1][j],
                             min(dp[i][j-1], dp[i-1][j-1]));
        }
    }
    return dp[m][n];
}

// ---------------- ADD VOTER ----------------
void addVoter() {
    Voter v;
    cout << "Enter Name: ";
    cin >> v.name;
    cout << "Enter DOB (DD-MM-YYYY): ";
    cin >> v.dob;
    cout << "Enter Address: ";
    cin >> v.address;

    voters.push_back(v);
    cout << "Voter added successfully!\n";
}

// ---------------- DISPLAY ----------------
void displayVoters() {
    cout << "\n===== VOTER LIST =====\n";
    if (voters.empty()) {
        cout << "No records found.\n";
        return;
    }

    for (int i = 0; i < voters.size(); i++) {
        cout << i+1 << ". "
             << voters[i].name << " | "
             << voters[i].dob << " | "
             << voters[i].address << endl;
    }
}

// ---------------- EXACT DUPLICATES ----------------
void exactDuplicates() {
    unordered_map<string, int> mp;
    bool found = false;

    cout << "\n===== EXACT DUPLICATES =====\n";

    for (auto &v : voters) {
        string key = normalize(v.name) + "|" + v.dob + "|" + normalize(v.address);

        if (mp[key]) {
            cout << v.name << " | " << v.dob << " | " << v.address << endl;
            found = true;
        } else {
            mp[key] = 1;
        }
    }

    if (!found) cout << "No exact duplicates found.\n";
}

// ---------------- FUZZY DUPLICATES ----------------
void fuzzyDuplicates() {
    unordered_map<string, vector<Voter>> blocks;
    bool found = false;

    // Blocking
    for (auto &v : voters) {
        string key = v.dob + "|" + soundex(v.name);
        blocks[key].push_back(v);
    }

    cout << "\n===== POSSIBLE DUPLICATES =====\n";

    for (auto &b : blocks) {
        vector<Voter> group = b.second;

        for (int i = 0; i < group.size(); i++) {
            for (int j = i + 1; j < group.size(); j++) {

                int nameDist = levenshtein(group[i].name, group[j].name);
                int addrDist = levenshtein(group[i].address, group[j].address);

                if (nameDist <= 2 && addrDist <= 3) {
                    cout << group[i].name << " <-> "
                         << group[j].name
                         << " | DOB: " << group[i].dob << endl;
                    found = true;
                }
            }
        }
    }

    if (!found) cout << "No fuzzy duplicates found.\n";
}

// ---------------- MENU ----------------
void menu() {
    int choice;

    do {
        cout << "\n========== VOTER DEDUPLICATION SYSTEM ==========\n";
        cout << "1. Add Voter\n";
        cout << "2. Display Voters\n";
        cout << "3. Find Exact Duplicates\n";
        cout << "4. Find Fuzzy Duplicates\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addVoter(); break;
            case 2: displayVoters(); break;
            case 3: exactDuplicates(); break;
            case 4: fuzzyDuplicates(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);
}

// ---------------- MAIN ----------------
int main() {
    menu();
    return 0;
}

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. One-Dimensional Array Operations\n";
        cout << "2. Linear Search in Array\n";
        cout << "3. Sorting Array (Asc & Desc)\n";
        cout << "4. Matrix Operations\n";
        cout << "5. C-Style String Operations\n";
        cout << "6. C++ String Class Operations\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        // 1D ARRAY OPERATIONS
        case 1: {
            int n, arr[100], sum = 0;
            cout << "Enter number of elements: ";
            cin >> n;

            for(int i = 0; i < n; i++) {
                cin >> arr[i];
                sum += arr[i];
            }

            cout << "Elements: ";
            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";

            int max = arr[0], min = arr[0];
            for(int i = 1; i < n; i++) {
                if(arr[i] > max) max = arr[i];
                if(arr[i] < min) min = arr[i];
            }

            cout << "\nMax: " << max;
            cout << "\nMin: " << min;
            cout << "\nAverage: " << (float)sum/n << endl;
            break;
        }

        // LINEAR SEARCH
        case 2: {
            int n, arr[100], key, found = 0;
            cout << "Enter number of elements: ";
            cin >> n;

            for(int i = 0; i < n; i++)
                cin >> arr[i];

            cout << "Enter element to search: ";
            cin >> key;

            for(int i = 0; i < n; i++) {
                if(arr[i] == key) {
                    cout << "Element found at position " << i+1 << endl;
                    found = 1;
                    break;
                }
            }

            if(!found)
                cout << "Element not found\n";
            break;
        }

        // SORTING
        case 3: {
            int n, arr[100];
            cout << "Enter number of elements: ";
            cin >> n;

            for(int i = 0; i < n; i++)
                cin >> arr[i];

            // Bubble Sort (Ascending)
            for(int i = 0; i < n-1; i++) {
                for(int j = 0; j < n-i-1; j++) {
                    if(arr[j] > arr[j+1]) {
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }

            cout << "Ascending Order: ";
            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";

            cout << "\nDescending Order: ";
            for(int i = n-1; i >= 0; i--)
                cout << arr[i] << " ";

            cout << endl;
            break;
        }

        // MATRIX OPERATIONS
        case 4: {
            int r1, c1, r2, c2;
            cout << "Enter rows and columns of Matrix A: ";
            cin >> r1 >> c1;
            cout << "Enter rows and columns of Matrix B: ";
            cin >> r2 >> c2;

            int A[10][10], B[10][10], C[10][10];

            cout << "Enter Matrix A:\n";
            for(int i = 0; i < r1; i++)
                for(int j = 0; j < c1; j++)
                    cin >> A[i][j];

            cout << "Enter Matrix B:\n";
            for(int i = 0; i < r2; i++)
                for(int j = 0; j < c2; j++)
                    cin >> B[i][j];

            int op;
            cout << "1. Addition\n2. Multiplication\nChoose: ";
            cin >> op;

            if(op == 1) {
                if(r1 == r2 && c1 == c2) {
                    cout << "Result:\n";
                    for(int i = 0; i < r1; i++) {
                        for(int j = 0; j < c1; j++) {
                            C[i][j] = A[i][j] + B[i][j];
                            cout << C[i][j] << " ";
                        }
                        cout << endl;
                    }
                } else {
                    cout << "Addition not possible\n";
                }
            }
            else if(op == 2) {
                if(c1 == r2) {
                    cout << "Result:\n";
                    for(int i = 0; i < r1; i++) {
                        for(int j = 0; j < c2; j++) {
                            C[i][j] = 0;
                            for(int k = 0; k < c1; k++)
                                C[i][j] += A[i][k] * B[k][j];
                            cout << C[i][j] << " ";
                        }
                        cout << endl;
                    }
                } else {
                    cout << "Multiplication not possible\n";
                }
            }
            break;
        }

        // C-STYLE STRINGS
        case 5: {
            char str1[100], str2[100];
            cout << "Enter string 1: ";
            cin >> str1;
            cout << "Enter string 2: ";
            cin >> str2;

            cout << "Length of string 1: " << strlen(str1) << endl;

            // Reverse manually
            int len = strlen(str1);
            for(int i = 0; i < len/2; i++) {
                char temp = str1[i];
                str1[i] = str1[len - i - 1];
                str1[len - i - 1] = temp;
            }

            cout << "Reversed string 1: " << str1 << endl;

            if(strcmp(str1, str2) == 0)
                cout << "Strings are equal\n";
            else
                cout << "Strings are not equal\n";

            break;
        }

        // C++ STRING CLASS
        case 6: {
            string s1, s2;
            cout << "Enter first string: ";
            cin >> s1;
            cout << "Enter second string: ";
            cin >> s2;

            cout << "Concatenation: " << s1 + s2 << endl;
            cout << "Substring (0 to 3): " << s1.substr(0,3) << endl;

            string sentence, word;
            cout << "Enter sentence: ";
            cin.ignore();
            getline(cin, sentence);

            cout << "Enter word to search: ";
            cin >> word;

            if(sentence.find(word) != string::npos)
                cout << "Word found\n";
            else
                cout << "Word not found\n";

            break;
        }

        case 7:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 7);

    return 0;
}

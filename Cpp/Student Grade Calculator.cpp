#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int marks[5];
    int total = 0, highest, lowest;
    float percentage;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter marks of 5 subjects (0-100):" << endl;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100)
                cout << "Invalid marks! Enter marks between 0 and 100.\n";

        } while (marks[i] < 0 || marks[i] > 100);

        total += marks[i];

        if (i == 0)
        {
            highest = lowest = marks[i];
        }
        else
        {
            if (marks[i] > highest)
                highest = marks[i];

            if (marks[i] < lowest)
                lowest = marks[i];
        }
    }

    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n----- Student Report -----" << endl;
    cout << "Name       : " << name << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;
    cout << "Highest    : " << highest << endl;
    cout << "Lowest     : " << lowest << endl;

    if (percentage >= 40)
        cout << "Status     : Pass" << endl;
    else
        cout << "Status     : Fail" << endl;

    return 0;
}

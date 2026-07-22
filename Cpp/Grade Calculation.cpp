#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int total = 0;
    float average;

    // Input marks
    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    // Calculate average
    average = total / 5.0;

    // Display total and average
    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    // Display grade
    if (average >= 90)
        cout << "Grade: A";
    else if (average >= 80)
        cout << "Grade: B";
    else if (average >= 70)
        cout << "Grade: C";
    else if (average >= 60)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}

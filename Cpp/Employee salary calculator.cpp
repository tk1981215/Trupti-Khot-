#include <iostream>
using namespace std;

int main()
{
    string name;
    float basicSalary, bonus, totalSalary;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Bonus: ";
    cin >> bonus;

    totalSalary = basicSalary + bonus;

    cout << "\nEmployee Name: " << name;
    cout << "\nBasic Salary: " << basicSalary;
    cout << "\nBonus: " << bonus;
    cout << "\nTotal Salary: " << totalSalary;

    return 0;
}

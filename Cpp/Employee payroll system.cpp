#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float pf;

public:
    Employee(int i, string n, float b, float h, float d, float p) {
        id = i;
        name = n;
        basicSalary = b;
        hra = h;
        da = d;
        pf = p;
    }

    int getId() {
        return id;
    }

    float getNetSalary() {
        return basicSalary + hra + da - pf;
    }

    void display() {
        cout << "\n---------------------------\n";
        cout << "Employee ID   : " << id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << hra << endl;
        cout << "DA            : " << da << endl;
        cout << "PF            : " << pf << endl;
        cout << "Net Salary    : " << getNetSalary() << endl;
    }

    void update() {
        cin.ignore();

        cout << "Enter New Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;

        cout << "Enter PF: ";
        cin >> pf;
    }
};

int main() {

    vector<Employee> empList;

    int choice;

    do {

        cout << "\n===== Employee Payroll System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            int id;
            string name;
            float basic, hra, da, pf;

            cout << "Enter Employee ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, name);

            cout << "Enter Basic Salary: ";
            cin >> basic;

            cout << "Enter HRA: ";
            cin >> hra;

            cout << "Enter DA: ";
            cin >> da;

            cout << "Enter PF: ";
            cin >> pf;

            empList.push_back(Employee(id, name, basic, hra, da, pf));

            cout << "\nEmployee Added Successfully!\n";

            break;
        }

        case 2: {

            if (empList.empty()) {
                cout << "No Employee Found.\n";
            } else {
                for (auto &e : empList) {
                    e.display();
                }
            }

            break;
        }

        case 3: {

            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;

            for (auto &e : empList) {

                if (e.getId() == id) {
                    e.display();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found.\n";

            break;
        }

        case 4: {

            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;

            for (auto &e : empList) {

                if (e.getId() == id) {
                    e.update();
                    cout << "Employee Updated Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found.\n";

            break;
        }

        case 5: {

            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < empList.size(); i++) {

                if (empList[i].getId() == id) {

                    empList.erase(empList.begin() + i);

                    cout << "Employee Deleted Successfully.\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found.\n";

            break;
        }

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}

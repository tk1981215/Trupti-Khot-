#include <iostream>
#include <vector>
using namespace std;

class Patient
{
public:
    int patientId;
    string name;
    int age;
    string gender;
    string disease;
    string doctor;
    int roomNo;
    float bill;
};

vector<Patient> patients;

void addPatient()
{
    Patient p;

    cout << "\nEnter Patient ID: ";
    cin >> p.patientId;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, p.name);

    cout << "Enter Age: ";
    cin >> p.age;

    cin.ignore();

    cout << "Enter Gender: ";
    getline(cin, p.gender);

    cout << "Enter Disease: ";
    getline(cin, p.disease);

    cout << "Enter Doctor Name: ";
    getline(cin, p.doctor);

    cout << "Enter Room Number: ";
    cin >> p.roomNo;

    cout << "Enter Bill Amount: ";
    cin >> p.bill;

    patients.push_back(p);

    cout << "\nPatient Added Successfully!\n";
}

void displayPatients()
{
    if (patients.empty())
    {
        cout << "\nNo Patient Records Found.\n";
        return;
    }

    cout << "\n------ Patient Records ------\n";

    for (int i = 0; i < patients.size(); i++)
    {
        cout << "\nPatient ID : " << patients[i].patientId << endl;
        cout << "Name       : " << patients[i].name << endl;
        cout << "Age        : " << patients[i].age << endl;
        cout << "Gender     : " << patients[i].gender << endl;
        cout << "Disease    : " << patients[i].disease << endl;
        cout << "Doctor     : " << patients[i].doctor << endl;
        cout << "Room No    : " << patients[i].roomNo << endl;
        cout << "Bill       : " << patients[i].bill << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Hospital Management System =====\n";
        cout << "1. Add Patient\n";
        cout << "2. Display Patients\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addPatient();
            break;

        case 2:
            displayPatients();
            break;

        case 3:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}

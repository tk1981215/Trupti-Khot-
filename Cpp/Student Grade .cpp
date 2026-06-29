#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }
};

vector<Student> students;

// Add Student
void addStudent() {
    int roll;
    string name;
    float marks;

    cout << "\nEnter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Marks: ";
    cin >> marks;

    students.push_back(Student(roll, name, marks));
    cout << "Student Added Successfully!\n";
}

// Display Students
void displayStudents() {
    if (students.empty()) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n---------------------------------------------\n";
    cout << "Roll No\tName\t\tMarks\n";
    cout << "---------------------------------------------\n";

    for (auto s : students) {
        cout << s.rollNo << "\t" << s.name << "\t\t" << s.marks << endl;
    }
}

// Search Student
void searchStudent() {
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (auto s : students) {
        if (s.rollNo == roll) {
            cout << "\nStudent Found!\n";
            cout << "Roll No : " << s.rollNo << endl;
            cout << "Name    : " << s.name << endl;
            cout << "Marks   : " << s.marks << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Update Marks
void updateMarks() {
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (auto &s : students) {
        if (s.rollNo == roll) {
            cout << "Enter New Marks: ";
            cin >> s.marks;
            cout << "Marks Updated Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Delete Student
void deleteStudent() {
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNo == roll) {
            students.erase(students.begin() + i);
            cout << "Student Deleted Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Display Topper
void displayTopper() {
    if (students.empty()) {
        cout << "\nNo Records Found!\n";
        return;
    }

    Student topper = students[0];

    for (auto s : students) {
        if (s.marks > topper.marks)
            topper = s;
    }

    cout << "\nTopper Details\n";
    cout << "Roll No : " << topper.rollNo << endl;
    cout << "Name    : " << topper.name << endl;
    cout << "Marks   : " << topper.marks << endl;
}

// Average Marks
void averageMarks() {
    if (students.empty()) {
        cout << "\nNo Records Found!\n";
        return;
    }

    float sum = 0;

    for (auto s : students)
        sum += s.marks;

    cout << "\nAverage Marks = " << sum / students.size() << endl;
}

// Sort by Marks
void sortStudents() {
    sort(students.begin(), students.end(),
         [](Student a, Student b) {
             return a.marks > b.marks;
         });

    cout << "Students Sorted by Marks.\n";
}

int main() {
    int choice;

    do {
        cout << "\n========== Student Grade Management ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Display Topper\n";
        cout << "7. Average Marks\n";
        cout << "8. Sort by Marks\n";
        cout << "9. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateMarks();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                displayTopper();
                break;
            case 7:
                averageMarks();
                break;
            case 8:
                sortStudents();
                break;
            case 9:
                cout << "\nThank You!\n";
                break;
            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 9);

    return 0;
}

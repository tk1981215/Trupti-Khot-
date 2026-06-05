#include <iostream>
using namespace std;

class Student {
public:
    int age;

    // Parameterized Constructor
    Student(int a) {
        age = a;
    }

    // Copy Constructor
    Student(const Student &s) {
        age = s.age;
    }

    void display() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1(20);   // Original object
    Student s2 = s1;  // Copy constructor called

    cout << "Object 1: ";
    s1.display();

    cout << "Object 2: ";
    s2.display();

    return 0;
}

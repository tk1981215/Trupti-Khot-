#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;      // private data (hidden)
    string name;

public:
    // Public function to set data
    void setData(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Public function to get data
    void displayData() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;

    s1.setData(101, "Rahul");   // Access through public function
    s1.displayData();

    return 0;
}

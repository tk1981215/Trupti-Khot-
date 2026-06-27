#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
    virtual void show() {}
};

class Derived : public Base {};

int main() {
    Base *ptr = new Derived();

    cout << "Type of object: " << typeid(*ptr).name() << endl;

    if (dynamic_cast<Derived*>(ptr))
        cout << "Object is of Derived class." << endl;
    else
        cout << "Object is not of Derived class." << endl;

    delete ptr;
    return 0;
}

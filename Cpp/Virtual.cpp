#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal *ptr;
    Dog d;

    ptr = &d;

    // Calls the derived class function
    ptr->sound();

    return 0;
}

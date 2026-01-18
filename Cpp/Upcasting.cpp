#include<iostream>
using namespace std;
class Base{
private:
int num1;
public:
Base():num1(0)
{}
Base(int num1):num1(num1)
{}
virtual void accept(){
cout<<"Enter Num1: "<<endl;
cin>>num1;
}
virtual void display(){
cout<<"Num1: "<<this->num1;
cout<<endl;
}
};
class Derived: public Base{
private:
int num2;
public:
Derived():num2(0)
{}
Derived(int num2):num2(num2)
{}
void accept(){
Base::accept();
cout<<"Enter Num2:"<<endl;
cin>>num2;
}
void display(){
Base::display();
cout<<"Num2: "<<this->num2;
cout<<endl;
}
};
int main(){
Base *ptr=new Derived;
ptr->accept();
ptr->display();
return 0;
}

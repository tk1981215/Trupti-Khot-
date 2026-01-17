#include<iostream>
using namespace std;
class A{
private:
int num1;
public:
A():num1(0)
{ }
A(int num1):num1(num1)
{ }
virtual void accept(){
cout<<"Enter Num1: "<<endl;
cin>>num1;
}
virtual void display(){
cout<<"Num1: "<<num1;
cout<<endl;
}
~A(){};
};
class B : public A{
private:
int num2;
public:
B():num2(0)
{ }
B(int num2):num2(num2)
{ }
B(int num1,int num2):A(num1),num2(num2)
{}
void accept(){
A::accept();
cout<<"Enter Num2: "<<endl;
cin>>num2;
}
void display(){
A::display();
cout<<"Num2: "<<num2;
cout<<endl;
}
};
int main(){
A a;
a.accept();
a.display();
A *ptr=new B;
  ptr->accept();
  ptr->display();
return 0;
}

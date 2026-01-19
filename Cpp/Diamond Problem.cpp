#include<iostream>
using namespace std;
class A{
private:
int num1;
public:
A():num1(0)
{}
A(int num1):num1(num1)
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
class B:virtual public A{
private:
int num2;
public:
B():num2(0)
{}
B(int num2):num2(num2)
{}
void accept(){
A::accept();
cout<<"Enter Num2: "<<endl;
cin>>num2;
}
void display(){
A::display();
cout<<"Num2: "<<this->num2;
cout<<endl;
}
};
class C:virtual public A{
private:
int num3;
public:
C():num3(0)
{}
C(int num3):num3(num3)
{}
void accept(){
A::accept();
cout<<"Enter Num3: "<<endl;
cin>>num3;
}
void display(){
A::display();
cout<<"Num3: "<<this->num3;
cout<<endl;
}
};
class D:public A,public B,public C{
private:
int num4;
public:
D():num4(0)
{}
D(int num4):num4(num4)
{}
void accept(){
A::accept();
B::accept();
C::accept();
cout<<"Enter Num4: "<<endl;
cin>>num4;
}
void display(){
A::display();
B::display();
C::display();
cout<<"Num4: "<<num4;
cout<<endl;
}
};
int main(){
D d;
d.accept();
d.display();
return 0;
}

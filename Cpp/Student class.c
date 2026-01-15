#include<iostream>
using namespace std;
class Student{
private:
int roll;
string name;
public:
Student():roll(0),name("")
{}
Student(int roll,string name):roll(roll),name(name)
{}
void accept(){
cout<<"Enter Roll No.: "<<endl;
cin>>roll;
cout<<"Enter Student Name: "<<endl;
cin>>name;
}
void display(){
cout<<"Roll No.: "<<this->roll;
cout<<endl;
cout<<"Student Name: "<<this->name;
cout<<endl;
}
};
int main(){
Student s1;
s1.accept();
s1.display();
return 0;
}

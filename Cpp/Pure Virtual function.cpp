#include<iostream>
#include<string>
using namespace std;
class Account{
private:
int accNo;
string name;
double balance;
public:
Account():accNo(0),name(""),balance(0.0)
{ }
Account(int accNo,string name,double balance):accNo(accNo),name(name),balance(balance)
{ }
virtual void accept(){
cout<<"Enter AccNo: "<<endl;
cin>>accNo;
cout<<"Enter Name: "<<endl;
cin>>name;
cout<<"Enter Balance: "<<endl;
cin>>balance;
}
virtual void display(){
cout<<"accNo.: "<<this->accNo;
cout<<endl;
cout<<"accHolder: "<<this->name;
cout<<endl;
cout<<"Balance: "<<this->balance;
cout<<endl;
}
virtual void amount()=0;
~Account(){};
};
class SimpleInterest : public Account{
private:
int rateOfInterest;
int years;
public:
SimpleInterest():rateOfInterest(0),years(0)
{}
SimpleInterest(int accNo,string name,double balance,int rateOfInterest,int years)
{}
void accept(){
Account::accept();
cout<<"Enter rateOFInterest: "<<endl;
cin>>rateOfInterest;
cout<<"Enter Years: "<<endl;
cin>>years;
}
void display(){
Account::display();
cout<<"Rate Of Interest: "<<rateOfInterest;
cout<<"Years: "<<years;
}
void amount(){
double amount=balance*rateofInterest*years/100;
}
};
int main(){
Account *ptr;
SimpleInterest s;
ptr->accept();
ptr->display();
ptr=&s;
s.accept();
s.display();
return 0;
}

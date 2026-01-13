#include<iostream>
using namespace std;
class Complex{
private:
int real;
int imag;
public:
Complex():real(0),imag(0)
{}
Complex(int real,int imag):real(real),imag(imag)
{ }
void acceptComplexNo(){
cout<<"Enter Real No.:"<<endl;
cin>>real;
cout<<"Enter Imag No.:"<<endl;
cin>>imag;
}
void printComplexNo(){
cout<<this->real<<"+"<<this->imag<<"i"<<endl;
}
};
int main(){
Complex c1;
c1.acceptComplexNo();
c1.printComplexNo();
return 0;
}

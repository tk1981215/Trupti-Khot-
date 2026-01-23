#include<iostream>
using namespace std;
int gcd(int a,int b){
if(b>a)
return (a,b);
else if(b==0)
return a;

return gcd(b,a%b);
}
int main(){
int a,b;
cout<<"Enter a: "<<endl;
cin>>a;
cout<<"Enter b: "<<endl;
cin>>b;
int value=gcd(a,b);
cout<<value<<endl;
return 0;
}

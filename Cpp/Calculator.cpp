#include<bits/stdc++.h>
using namespace std;
int main(){
int choice,res;
int num1,num2;
while(choice!=0){
cout<<"0.Exit"<<endl;
cout<<"1.Addition"<<endl;
cout<<"2.Substraction"<<endl;
cout<<"3.Multiplication"<<endl;
cout<<"4.Dovision"<<endl;
switch(choice){
case 1 :
res=num1+num2;
cout<<"Addition: "<<endl;
break;

case 2 :
res=num1-num2;
cout<<"Sibstraction: "<<endl;
break;

case 3 :
res=num1*num2;
cout<<"Multiplication: "<<endl;
break;

case 4 :
if(num2==0){
cout<<"Division by error."<<endl;
}
else{
res=num1/num2;
cout<<"Division: "<<endl;
}
break;
}
}
return 0;
}

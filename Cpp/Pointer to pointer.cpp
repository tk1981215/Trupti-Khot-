#include<bits/stdc++.h>
using namespace std;
int main(){
int x=10;
int *ptr=&x;
int **pptr=&ptr;
cout<<"value of x: "<<x<<endl;
cout<<"value using pptr (*ptr):"<<*ptr<<endl;
cout<<"value using pptr(**pptr): "<<**pptr;
return 0;
}

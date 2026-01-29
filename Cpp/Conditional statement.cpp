#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n%2==0){
cout<<n<<"is even";
}
else if(n%3==0){
cout<<n<<"is divisible by 3";
}
else{
cout<<n<<"is odd";
}
return 0;
}

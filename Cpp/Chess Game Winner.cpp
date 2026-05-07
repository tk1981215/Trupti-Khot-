#include<iostream>
using namespace std;
int main(){
int n;
  cin>>n;
  string s;
  cin>>s;

  int anton = 0, danik = 0;
  for(char ch : s){
    if(ch == 'A')
      anton++;
    else
      danik++;
  }

  if(anton > danik){
    cout<<"Anton";
  }
  else if(anton < danik){
    cout<<"Danik";
  }
  else{
    cout<<"Friendship";
  }
  return 0;
}

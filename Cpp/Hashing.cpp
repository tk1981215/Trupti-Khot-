#include<iostream>
#include<set>
using namespace std;
int main(){
  int arr[]={4,2,5,4,3,2,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  set<int>s;
  for(int i=0;i<n;i++){
    s.insert(arr[i]);
    
  }
  cout<<"Array after removing duplicates";
  for(auto x:s){
    cout<<x<<"";
  }
  return 0;
}

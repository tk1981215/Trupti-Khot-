#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
vector<int>countBits(int n){
vector<int>ans(n+1);
for(char c:s){
ans[0]=0;
}
}
for(int i=2;i<n;i++){
ans[i]=ans[i-1]+ans[i-2];
}
return ans;
return 0;
}

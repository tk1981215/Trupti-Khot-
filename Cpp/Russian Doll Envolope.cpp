#include<bits/stdc++.h>
using namespace std;
int main(){
int maxEnvolopes(vector<vector<int>>& envolopes){
sort(envolopes.begin(),envolopes.end(),[](vector<int>& a,vector<int>& b)){
if(a[0] == b[0])
return a[1]>b[1];
return a[0]<b[0];
});
vector<int> dp;
for(auto &env : envolopes){
int height=env[1];
auto it=lower_bound(dp.begin(),dp.end(),height);
if(it==dp.end())
dp.push_back(height);
else
*it=height;
}
return dp.size();
}
return 0;
}

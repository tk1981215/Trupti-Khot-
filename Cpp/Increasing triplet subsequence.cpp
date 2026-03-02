#include<bits/stdc++.h>
using namespace std;
int main(){
int n=nums.size();
int increasingNumber(vector<int>& nums){
int left=INT_MAX;
int mid=INT_MAX;
if(nums.size()<3)
return false;
for(int i=0;i<n;i++){
if(nums[i]<mid)
return true;
else if(nums[i]<left && nums[i]>mid)
nums[i]=mid;
else if(nums[i]<left)
nums[i]=left;
}
return false;
}
return 0;
}

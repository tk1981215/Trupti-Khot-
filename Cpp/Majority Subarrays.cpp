#include <iostream>
#include <vector>
using namespace std;

int countMajoritySubarrays(vector<int>& arr, int majority) {
    int n = arr.size();
    int count = 0;

    for(int i=0;i<n;i++) {
        int freq = 0;

        for(int j=i;j<n;j++) {
            if(arr[j] == majority)
                freq++;

            int len = j - i + 1;

            if(freq > len/2)
                count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1,2,1,1};

    cout << "Count = " << countMajoritySubarrays(arr,1);

    return 0;
}

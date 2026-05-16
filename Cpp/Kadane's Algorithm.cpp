#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadane(vector<int>& arr) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        
        currentSum = currentSum + arr[i];

        // Update maximum sum
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        // If current sum becomes negative
        // start from 0 again
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = kadane(arr);

    cout << "Maximum Subarray Sum = " << result;

    return 0;
}

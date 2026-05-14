#include <iostream>
#include <vector>
using namespace std;

int longestBitonicSubsequence(vector<int>& arr)
{
    int n = arr.size();

    vector<int> lis(n, 1);
    vector<int> lds(n, 1);

    // Calculate LIS
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }

    // Calculate LDS
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = n - 1; j > i; j--)
        {
            if(arr[i] > arr[j] && lds[i] < lds[j] + 1)
            {
                lds[i] = lds[j] + 1;
            }
        }
    }

    int maxLength = 0;

    // Find maximum LBS
    for(int i = 0; i < n; i++)
    {
        maxLength = max(maxLength, lis[i] + lds[i] - 1);
    }

    return maxLength;
}

int main()
{
    vector<int> arr = {1, 11, 2, 10, 4, 5, 2, 1};

    cout << "Length of Longest Bitonic Subsequence = "
         << longestBitonicSubsequence(arr);

    return 0;
}

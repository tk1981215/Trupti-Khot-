#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(int arr[], int low, int high)
{
    Pair result, left, right;

    // Only one element
    if(low == high)
    {
        result.min = result.max = arr[low];
        return result;
    }

    // Two elements
    if(high == low + 1)
    {
        if(arr[low] < arr[high])
        {
            result.min = arr[low];
            result.max = arr[high];
        }
        else
        {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }

    // Divide
    int mid = (low + high) / 2;

    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid + 1, high);

    // Combine
    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;

    return result;
}

int main()
{
    int arr[] = {7, 2, 9, 4, 1, 6};
    int n = 6;

    Pair result = getMinMax(arr, 0, n - 1);

    cout << "Minimum = " << result.min << endl;
    cout << "Maximum = " << result.max << endl;

    return 0;
}

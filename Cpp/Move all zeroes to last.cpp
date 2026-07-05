#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int index = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining positions with 0
    while (index < n)
    {
        arr[index] = 0;
        index++;
    }
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    moveZeroes(arr, n);

    cout << "Array after moving zeroes:\n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

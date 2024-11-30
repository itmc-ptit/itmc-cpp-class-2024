#include <iostream>
using namespace std;

int findMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i]; //
        }
    }
    return min;
}

int main()
{
    int n, arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findMin(arr, size) << endl;
    return 0;
}

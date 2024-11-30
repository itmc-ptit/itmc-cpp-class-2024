#include <iostream>
using namespace std;

int sumOddNumbers(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    int n, arr[n];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << sumOddNumbers(arr, size) << endl;
    return 0;
}

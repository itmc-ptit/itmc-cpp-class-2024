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
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << sumOddNumbers(arr, size) << endl;
    return 0;
}
#include <iostream>

using namespace std;

int findMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int n = 0;
    cout << "nhap vao so phan tu cua mang: ";
    cin >> n;

    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "nhap vao phan tu thu " << i + 1 << " : ";
        cin >> myArr[i];
    }

    cout << "min cua mang la: " << findMin(myArr, n);
}
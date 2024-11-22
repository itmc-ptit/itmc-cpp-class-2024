#include <iostream>

using namespace std;

int sumOddNumbers(int arr[], int size)
{
    int tongLe = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            tongLe = tongLe + arr[i];
        }
    }

    return tongLe;
}

int main()
{
    int n = 0;
    cout << "nhap vao so luong phan tu cua mang: ";
    cin >> n;

    int myArr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "nhap vao phan tu thu " << i + 1 << ": ";
        cin >> myArr[i];
    }

    cout << "tong le cua mang la: " << sumOddNumbers(myArr, n);
}
#include <iostream>

using namespace std;

void nhapMang(const int &n, double arr[])
{
    for (int i = 0; i < n; i++)
    {
            cout << "nhap du lieu cho phan tu thu " << i+1 << ": ";
            cin >> arr[i];
    }
}

double findMax(const int &n, double arr[])
{
    double max = arr[0];

    for ( int i = 0; i < n; i++)
    {
        if (max < arr[i]) max = arr[i];
    }

    return max;
    
}

double findMin(const int &n, double arr[])
{
    double min = arr[0];

    for ( int i = 0; i < n; i++)
    {
        if (min > arr[i]) min = arr[i];
    }

    return min;
}

int main()
{
    int n = 0;

    cout << "nhap vao kich thuoc cua mang: ";
    cin >> n;

    double myArr[n];

    nhapMang(n, myArr);

    cout << "GTLN: " << findMax(n, myArr) << "\n";
    cout << "GTNN: " << findMin(n, myArr) << "\n";    
}
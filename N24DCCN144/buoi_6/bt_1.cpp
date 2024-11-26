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

void xuatMang(const int &n, double arr[])
{
    for (int i = 0; i < n; i++)
    {
            cout << "arr[" << i << "]" << " = " << arr[i] << "\n";
    }
}

double tong(const int &n, double arr[])
{
    double t = 0;

    for (int i = 0; i < n; i++)
    {
        t = arr[i] + t;
    }

    return t;
}

double tich(const int &n, double arr[])
{
    double t = 1;

    for (int i = 0; i < n; i++)
    {
        t = arr[i]*t; 
    }
    
    return t;
}

double GTTB(const int &n, double arr[])
{
    int t = tong(n, arr);

    return t/double(n);
}

int main()
{
    int n = 0;

    cout << "nhap vao kich thuoc cua mang: ";
    cin >> n;

    double myArr[n];

    nhapMang(n, myArr);

    double tongArr = tong(n, myArr);
    double tichArr = tich(n, myArr);
    double GTTB_Arr = GTTB(n, myArr);

    cout << "tong mang: " << tongArr << "\n";
    cout << "tich mang: " << tichArr << "\n";
    cout << "gia tri trung binh mang: " << GTTB_Arr << "\n";
    
}
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

void sapXepMangTangDan(const int &n, double arr[])
{
    for ( int i = 0; i < n; i++)
    {
        for ( int i = 0; i < n - 1; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    double tg = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tg;
                }
            }    
        } 
    }
    
}

int main()
{
    int n = 0;

    cout << "nhap vao kich thuoc cua mang: ";
    cin >> n;

    double myArr[n];

    nhapMang(n, myArr);
    sapXepMangTangDan(n, myArr);
    xuatMang(n, myArr);
}
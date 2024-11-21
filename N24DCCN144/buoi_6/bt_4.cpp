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


int soLanXuatHien(const int &n, double arr[], double m)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (m == arr[i]) dem++;
    }

    return dem;
}

void xuatHienNhieuNhat(const int &n, double arr[])
{
    double phanTu;
    int soLan = -1;
    for (int i = 0; i < n; i++)
    {
        int k = soLanXuatHien(n, arr, arr[i]);
        if (soLan < k)
        {
            phanTu = arr[i];
            soLan = k;
        }
    }

    cout << "phan tu xuat hien nhieu nhat: " << phanTu << "\n";
    cout << "so lan suat hien: " << soLan ;
}

int main()
{
    int n = 0;

    cout << "nhap vao kich thuoc cua mang: ";
    cin >> n;

    double myArr[n];

    nhapMang(n, myArr);
    xuatHienNhieuNhat(n, myArr);    
}
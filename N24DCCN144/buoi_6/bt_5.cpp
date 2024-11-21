#include <iostream>
#include <vector>

using namespace std;

void nhapMang(const int &n, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {

        int newso = 0;
        cout << "nhap du lieu cho phan tu thu " << i+1 << ": ";
        cin >> newso;

        arr.push_back(newso);
    }
}

void xuatMang(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "arr[" << i << "]" << " = " << arr[i] << "\n";
    }    
}

void xoaChanDauTien(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr.erase(arr.begin() + i);
            break;
        }
    }
    
}

int main()
{
    int n = 0;

    cout << "nhap vao kich thuoc cua mang: ";
    cin >> n;

    vector<int> myArr;

    nhapMang(n, myArr);
    xoaChanDauTien(myArr);
    xuatMang(myArr);
}
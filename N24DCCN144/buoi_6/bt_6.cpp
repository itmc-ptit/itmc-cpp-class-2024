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

void chenSo(vector<int> &arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] % 2 != 0)
        {
            auto index = arr.begin() + i + 1;
            arr.insert(index, 13);

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
    chenSo(myArr);
    xuatMang(myArr);
}

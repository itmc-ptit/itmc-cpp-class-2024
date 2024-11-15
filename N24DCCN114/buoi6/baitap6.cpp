#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"nhap so luong phan tu cua mang ";
    cin >>n;
    int mang[n];
    cout <<"nhap cac phan tu cua mang ";
    for (int i=0;i<n;i++)
    {
        cin >>mang[i];
    } 
    for (int i=n-1;i>=0;i--)
    {
        if (mang[i]%2!=0)
        {
            mang[i]=13;
            break;
        }
    }
    for (int i=0;i<n;i++)
    {
        cout <<mang[i]<<" ";
    }
}
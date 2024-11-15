#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,a;
    cout <<"nhap so luong phan tu cua mang ";
    cin >>n;
    int mang[n];
    cout <<"nhap cac phan tu cua mang ";
    for (int i=0;i<n;i++)
    {
        cin >>mang[i];
    } 
    for (int i=0;i<n;i++)
    {
        if(mang[i]%2==0)
        {
            a=i;
            break;
        }
    }
    for (int i=0;i<n;i++)
    {
        if(i!=a)
        {
            cout <<mang[i]<<" ";
        }
    }

}
#include <iostream>
using namespace std;
int main()
{
    int n,tam;
    cout <<"nhap so luong phan tu cua mang ";
    cin >>n;
    int mang[n];
    cout <<"nhap cac phan tu cua mang ";
    for (int i=0;i<n;i++)
    {
        cin >>mang[i];
    }
    for (int j=1;j<n;j++)
    {
    for (int i=0;i<n-1;i++)
    {
        if (mang[i]>mang[i+1])
        {
            tam=mang[i];
            mang[i]=mang[i+1];
            mang[i+1]=tam;
        }
    }}
    cout <<"cac phan tu cua mang sau khi sap xep theo chieu tang dan la ";
    for (int i=0;i<n;i++)
    {
        cout <<mang[i]<<" ";
    }
}
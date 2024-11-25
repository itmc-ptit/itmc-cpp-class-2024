#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n,tong=0,tich=1;
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
        tong +=mang[i];
        tich*=mang[i];
    }
    double tb=(double)tong/n;
    cout <<"tong cac phan tu cua mang la "<<tong<<endl;
    cout <<"tich cac phan tu cua mang la "<<tich<<endl;
    cout <<"gia tri trung binh cac phan tu cua mang la "<<tb<<endl;
}
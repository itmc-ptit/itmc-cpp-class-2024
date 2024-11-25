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
    int max=mang[0],min=mang[0];
    for (int i=0;i<n;i++)
    {
        if (max<mang[i])
        {
            max=mang[i];
        }
        if (min>mang[i])
        {
            min=mang[i];
        }
    }
    cout <<"gia tri lon nhat cua mang la "<<max<<endl;
    cout <<"gia tri nho nhat cua mang la "<<min<<endl;


}
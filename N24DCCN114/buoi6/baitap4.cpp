#include <iostream>
using namespace std;
int main()
{
    int n,a,b=0;
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
        a=0;
        for (int j=0;j<n;j++)
        {   
            if(mang[i]==mang[j])
            {
                a++;                  
            }

        }
        if (a>=b)
        {
            b=a;
            a=i;
        }
    }
    cout <<mang[a]<<" co tan suat xuat hien nhieu nhat va xuat hien "<<b<<" lan";

}
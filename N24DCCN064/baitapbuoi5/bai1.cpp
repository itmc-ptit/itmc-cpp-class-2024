#include<iostream>
using namespace std;
int main()
{
    int tong;
    int tich;
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        tong = tong + a[i];
        tich = tich*a[i];
    }
    cout <<"tong: " << tong<<endl;
    cout <<"tich: " << tich<<endl;
    cout <<"gia tri trung binh: "<< tong/n;
}
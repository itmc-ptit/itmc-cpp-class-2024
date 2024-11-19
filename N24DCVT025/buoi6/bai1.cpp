//1
#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,tong=0,tich=1,tb,a[100];
    cout<<"nhap vao so luong ptu cua mang: ";cin>>n;
    for (int i=0;i<n;i++){
        cout<<"nhap vao ptu thu "<<i+1<<": ";
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
            tong+=a[i];
            tich*=a[i];
            tb=tong/(n);
    }
    cout<<"tong: "<<tong<<"\n"<<"tich: "<<tich<<"\n"<<"trung binh: "<<tb;
}
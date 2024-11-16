#include<iostream>
using namespace std;
int main(){
    int n,tong=0,tich=1;
    cout<<"nhap so luong phan tu: ";cin>>n;
    int a[n];
    cout<<"nhap cac phan tu: ";
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++){
        tong+=a[i];
        tich*=a[i];
    }
    cout<<"tong mang: "<<tong<<endl;
    cout<<"tich mang: "<<tich<<endl;
    cout<<"trung binh mang: "<<float(tong/n);
}
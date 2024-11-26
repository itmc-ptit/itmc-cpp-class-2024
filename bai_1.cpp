#include<iostream>
using namespace std;
int main(){
    int n=0,tong=0 , tich=1;
    cout<<"Hay nhap so luong phan tu: ";
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cout<<"Nhap gia tri thu "<<i+1 <<" cua mang: ";
        cin>>a[i];
    }for(int i = 0;i<n;i++){
        tong+=a[i];
        tich*=a[i];
    }
    double trungbinh = tong/n;
    cout<<"Tong cua mang do la "<< tong<<endl;
    cout<<"Tich cua mang do la "<<tich<<endl;
    cout<<"GT trung binh cua mang do la "<<trungbinh;
return 0;
}
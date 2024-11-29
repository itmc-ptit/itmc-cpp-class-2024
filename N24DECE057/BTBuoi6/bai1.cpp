#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu : ";cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cout<<"Nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
    }
    int tong=0,tich=1;
    for (int i=0;i<n;i++) {
        tong+=a[i];
        tich*=a[i];
    }
    float tb=float(tong)/n;
    cout<<"Tong : "<<tong<<endl;
    cout<<"Tich : "<<tich<<endl;
    cout<<"GTTB : "<<fixed<<setprecision(2)<<tb;
    return 0;
}
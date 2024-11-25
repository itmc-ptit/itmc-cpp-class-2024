#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu : ";cin>>n;
    int a[n];
    vector <int> v(10000000);
    for (int i=0;i<n;i++) {
        cout<<"Nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
        v[a[i]]++;
    }
    int maxxh=INT_MIN,kq;
    for (int i=0;i<n;i++) {
       if (maxxh<v[a[i]]) {
         kq=a[i];
         maxxh=v[a[i]];
       }
    }
    cout<<"Phan tu "<<kq<<" xuat hien "<<maxxh<<" lan";
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu : ";cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cout<<"Nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
    }
    for (int i=n-1;i>=0;i--) {
        if (a[i]%2!=0) {
            a[i]=13;
            break;
        }
    }
    for (int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
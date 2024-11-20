#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu : ";cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cout<<"Nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
    }
    int i=0;
    while (i!=n-1) {
        int k=i,nn=a[i];
        for (int j=i+1;j<n;j++) 
             if (nn>a[j]) {
                nn=a[j];
                k=j;
             }
        swap(a[i],a[k]);
        i++;
    }
    for (int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
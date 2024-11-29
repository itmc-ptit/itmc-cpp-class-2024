#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu : ";cin>>n;
    int a[n];
    int ln=INT_MIN,nn=INT_MAX;
    for (int i=0;i<n;i++) {
        cout<<"Nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
        ln=max(a[i],ln);nn=min(a[i],nn);
    }
    cout<<"So LN trong mang : "<<ln<<endl;
    cout<<"So NN trong mang : "<<nn<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap so luong phan tu mang:";
    cin>>n;
    int a[n];
    long long s=0,t=1;
    float tb;
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        s+=a[i];
        t*=a[i];
        tb=s/(float)n;
    }
    cout<<"tong:"<<s<<endl;
    cout<<"tich:"<<t<<endl;
    cout<<"trung binh:"<<tb;
    return 0;
}
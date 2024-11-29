#include<iostream>
using namespace std;
bool kiemtra(int* x,int k){
    int i=1;
    bool kt=true;
    for(int i=1;i<=k-1;i++){
        if(x[i-1]>x[i]){
            kt=false;
            break;
        }
    }
    return kt;
}
int main(){
    int n;
    cout<<"nhap so luong ptu: ";cin>>n;
    int a[n];
    cout<<"nhap cac ptu: ";
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    while (kiemtra(a,n)==false){
        for(int i=1;i<=n-1;i++){
            if(a[i-1]>a[i]){
                int hoandoi=a[i];
                a[i]=a[i-1];
                a[i-1]=hoandoi;
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }

}
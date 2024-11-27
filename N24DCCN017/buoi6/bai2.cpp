#include<iostream>
using namespace std;
int main(){
    int n,lon;
    cout<<"nhap so luong ptu: ";cin>>n;
    cout<<"nhap ca ptu: ";
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    int be=a[0];
    for(int i=0;i<=n-1;i++){
        if(a[i]>lon){
            lon=a[i];
        }
        if(a[i]<be){
            be=a[i];
        }
    }
    cout<<"so lon nhat la: "<<lon<<endl;
    cout<<"so be nhat la: "<<be;
}
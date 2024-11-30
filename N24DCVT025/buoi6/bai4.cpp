//4
#include <bits//stdc++.h>
using namespace std;
int main(){
    int n,a[1000],x=0,k=0,h;
    cout<<"nhap so luong ptu: ";cin>>n;
    for (int i=0;i<n;i++){
        cout<<"nhap ptu thu "<<i+1<<": ";
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        x=1;
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                x++;
            }
            if (x>k){
                k=x;
                h=a[i];
            }
        }
    }
    if(k>1){
        cout<<"ptu co tan suat xuat hien nhieu nhat la:"<<h<<"\n";
        cout<<"xuat hien "<<k<<" lan";
    } 
    else if (k==1){
        cout<<"tat ca ptu deu xuat hien 1 lan";
    }
  
}
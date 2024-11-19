//3
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1000],c;
    cout<<"nhap so luong ptu: ";cin>>n;
    for (int i=0;i<n;i++){
        cout<<"nhap vao ptu thu "<<i+1<<": ";
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[j]<a[i]){
                c=a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
    }
    for (int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}
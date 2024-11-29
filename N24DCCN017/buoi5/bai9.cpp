#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"nhap chieu cao cua cay: ";cin>>n;
    cout<<"nhap so luong cay: ";cin>>m;
    int x=n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=(i*2-1);j++){
            cout<<"*";
        }
        for(int k=1;k<=m-1;k++){
            for(int j=1;j<=(x-1)*2;j++){
                cout<<" ";
            }
            for(int j=1;j<=(i*2-1);j++){
            cout<<"*";
            }
        }
        cout<<"\n";
        x-=1;
    }
    for(int i=1;i<=n-1;i++){
        cout<<" ";
    }
    cout<<"*";
    for(int i=1;i<=m-1;i++){
        for(int j=1;j<=(n-1)*2;j++){
            cout<<" ";
        }
    cout<<"*";
    }
}
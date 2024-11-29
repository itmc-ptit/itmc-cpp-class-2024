#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap chieu cao cua cay: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=1;j<=(i*2-1);j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        cout<<" ";
    }
    cout<<"*";
}
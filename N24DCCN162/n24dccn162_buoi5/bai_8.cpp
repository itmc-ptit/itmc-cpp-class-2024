#include<iostream>
using namespace std;
int main(){
    int h;
    cout<<"Hay nhap chieu cao cua cay thong "<<endl;
    cin>>h;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=h-i;j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
        }
    for(int i=1;i<=h-1;i++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    return 0;
    }
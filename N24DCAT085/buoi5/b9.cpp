#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"nhap chieu cao cay thong: ";cin>>n;
    cout<<"nhap so luong cay: ";cin>>m;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=m;j++) {for(int k=1;k<=(n-i);k++){cout<<" ";} 
                                for(int l=1;l<=(i*2-1);l++){cout<<"*";}
                                for(int p=1;p<=(n-i);p++){cout<<" ";}}
                                cout<<endl; 
    }
    for(int o=1;o<=m;o++){for(int a=1;a<n;a++){cout<<" ";} 
                                              cout<<"*";
                          for(int b=1;b<n;b++){cout<<" ";}}
}
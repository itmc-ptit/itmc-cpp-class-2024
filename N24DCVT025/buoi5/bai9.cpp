#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,h=1;
    cout<<"nhap so cay thong: ";cin>>m;
    cout<<"nhap chieu cao cua cay thong: ";cin>>n;
    for(int o=1; o<=n;o++){
        for (int p=1;p<=n-o;p++){
            cout<<" ";
        }
        for (int i=1;i<=m;i++){
            for(int k=1;k<=2*o-1;k++){
                cout<<"*";
            }
            for(int j=1;j<=2*n-2*o;j++){
                cout<<" ";
            }
        
        }
        for (int q=1;q<=n-o;q++){
            cout<<" ";
        }
        cout<<"\n";
    }
        for (int x=1;x<=m;x++){
            for (int z=1;z<=n-1;z++){
                cout<<" ";
            }
            cout<<"*";
            for (int z=1;z<=n-1;z++){
                cout<<" ";
            }
        }
    cout<<"\n";
}
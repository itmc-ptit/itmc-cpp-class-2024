#include <iostream>
using namespace std;
void veCayThong(int soTang) {
    for (int i = 1; i <= soTang; i++){
        for (int j = i; j < soTang; j++) {
            cout << " ";
            }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout<<" ";
    }
    cout<<"\n";
}
int main(){
    int n,m;
    cout<<"nhap so luong cay thong: ";cin>>n;
    cout<<"nhap chieu cao cay: ";cin>>m;
    for(int i=1;i<=m;i++){
        for (int j=1; j<= n;j++){
            for (int k=1;k< m;k++){
                cout<<" ";
            }
            for(int l=1;l<=(2*i-1);l++){
                cout<<"*";
            }
            cout<<" ";
            }
            cout<<"\n";
        }
}
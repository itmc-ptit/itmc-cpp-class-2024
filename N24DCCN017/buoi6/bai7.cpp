#include<iostream>
using namespace std;
int main(){
    int h1,h2,c1,c2;
    cout<<"nhap kich thuoc ma tran 1: ";cin>>h1>>c1;
    cout<<"nhap kinh thuoc ma tran 2: ";cin>>h2>>c2;
    if(c1==c2&&h1==h2){
        int a[h1][c1],b[h2][c2];
        cout<<"nhap ma tran 1: ";
        for(int i=0;i<h1;i++){
            for(int j=0;j<c1;j++){
                cin>>a[i][j];
            }
        }
        cout<<"nhap ma tran 2: ";
        for(int i=0;i<h2;i++){
            for(int j=0;j<c2;j++){
                cin>>b[i][j];
            }
        }
        cout<<"tong 2 ma tran la: "<<endl;
        int c[h1][c1];
        for(int i=0;i<h1;i++){
            for(int j=0;j<c2;j++){
                cout<<(c[i][j]=a[i][j]+b[i][j])<<" ";
            }
            cout<<"\n";
        }
        
    }
    else cout<<"2 ma tran khong cung kich thuoc!";
}
//7
#include <iostream>
using namespace std;
int main(){
    int n,m,p,q,a[100][100],b[100][100];
    cout<<"nhap so hang cho ma tran A: ";cin>>n;
    cout<<"nhap so cot cho ma tran A: ";cin>>m;
    cout<<"nhap so hang cho ma tran B: ";cin>>p;
    cout<<"nhap so cot cho ma tran B: ";cin>>q;
    if(n!=p || m!=q){
        cout<<"khong the cong 2 ma tran";
    }
    else{
        cout<<"nhap cac ptu cho ma tran A: \n";
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cout<<"nhap phan tu a"<<i+1<<j+1<<": ";cin>>a[i][j];
            }
        }
        cout<<"nhap cac ptu cho ma tran B: \n";
        for (int h=0;h<p;h++){
            for (int k=0;k<q;k++){
                cout<<"nhap phan tu b"<<h+1<<k+1<<": ";cin>>b[h][k];
            }
        }
    }
    cout<<"tong cuua 2 ma tran la: \n";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<"c"<<i+1<<j+1<<" = "<<a[i][j]+b[i][j]<<"\n";
        }
    }
    return 0;
}
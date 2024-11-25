#include <iostream>
using namespace std;
bool kiemtra(int n){
    if (n<2) return false;
    if (n==2) return true;
    if (n>2) {for(int i=2;i<n;i++){if(n%i==0) return false;}}return true; }
int main(){
    int so;
    cout<<"nhap so: "<<endl;cin>>so; cout<<"cac so nguyen to nho hon: ";
    if(so==2){cout<<" khong hop le";}
    for (int j=2;j<so;j++){if(kiemtra(j)){cout<<j<<",";}}
}
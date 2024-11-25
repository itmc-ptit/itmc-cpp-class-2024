#include <iostream>
using namespace std;
bool kiemtra(int n){
    if (n<2) return false;
    else if (n==2) return true; else {for (int i=2;i<=(n-1);i++){if(n%i==0) return false;} return true;}
}
int main(){
    int so;
    cout<<"nhap so"; cin>>so;
    if (kiemtra(so)) {cout<<"do la so nguyen to ";} else {cout<<"do khong phai so nguyen to";} 
}
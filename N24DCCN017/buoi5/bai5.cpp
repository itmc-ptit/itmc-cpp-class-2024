#include<iostream>
#include<math.h>
using namespace std;
bool kiemtra(int n){
    bool kt=true;
    if(n==2) kt=true;
    else {
    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0) {
            kt=false; 
            break;
            }
    }
    }
    return kt;
}
int main(){
    int x;
    cout<<"nhap n: ";cin>>x;
    cout<<"cac so nguyen to be hon n la: ";
    for(int i=2;i<x;i++){
        if (kiemtra(i)) cout<<i<<" ";
    }

}
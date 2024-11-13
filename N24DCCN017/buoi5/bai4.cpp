#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    bool kt=true;
    cout<<"nhap 1 so de kiem tra: ";cin>>n;
    if(n==2) kt=true;
    else {
    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0) {
            kt=false; 
            break;
            }
    }
    }
    if(kt==true)cout<<n<<" la so nguyen to";
    else cout<<n<<" khong phai la so nguyen to";
}
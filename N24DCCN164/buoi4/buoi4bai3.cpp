#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    a=sqrt(n);
    if(a*a==n){
        cout<<"la so chinh phuong";
    }else{
        cout<<"ko la so chinh phuong";
    }
}
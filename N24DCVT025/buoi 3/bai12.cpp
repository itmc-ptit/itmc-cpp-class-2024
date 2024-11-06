using namespace std;
#include <bits/stdc++.h>
//12
int main(){
    int a;
    cout<<"nhap a: ";cin>>a;
    while (a<0 || a>255){
        cout <<"nhap lai a sao cho 0<=a<=255: ";cin>>a;
    }
    cout<<" ki tu tuong ung cua "<<a<< " trong ascii la: "<<(char)a;
    return 0;
}
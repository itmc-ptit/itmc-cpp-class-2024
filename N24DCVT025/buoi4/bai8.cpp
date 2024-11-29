//8
#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cout<<"nhap 3 canh cua tam giac: \n";
    cout<<"nhap canh thu 1: ";cin>>a;
    cout<<"nhap canh thu 2: ";cin>>b;
    cout<<"nhap canh thu 3: ";cin>>c;
    if (a+b<c || a+c<b || b+c<a){
        cout<<"khong la tam giac ";
    }else if (a==b && b==c){
        cout<<"tam giac deu ";
    }else if (a==b || b==c || a==c){
        cout<<"tam giac can";
    }else if (a*a==b*b+c*c || b*b==a*a + c*c || c*c == a*a + b*b){
        cout<<"tam giac vuong";
    } else {
        cout<<"tam giac thuong";
    }
    return 0;
}
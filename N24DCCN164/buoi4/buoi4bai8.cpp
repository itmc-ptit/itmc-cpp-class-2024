#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"nhap 3 canh tam giac";
    cin>>a>>b>>c;
    if(a+b>c||a+c>b||b+c>a){
        if(a==b&&a==c){
            cout<<"la tam giac deu";
        }else if(a==b||a==c||c==b){
            cout<<"la tam giac can";
        }else if(c*c==a*a+b*b||b*b==a*a+c*c||a*a==b*b+c*c){
            cout<<"la tam giac vuong";}
        else {
            cout<<"la tam giac thuong";}
    }else{
        cout<< "ko la tam giac";
    }
}
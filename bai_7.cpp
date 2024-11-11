#include<iostream>

using namespace std;
int main(){
    float a,b;
    cout<<"Phuong trinh ax+b=0"<< endl;
    cout<< "Hay nhap cac so a va b"<<endl;
    cin>>a>>b;
    if((a==0) && (b==0)){
        cout<<"Phuong trinh co vo so nghiem";
    }
    if((a==0)&&(b!=0)){
        cout<<"Phuong trinh vo nghiem";
    }
    if(a!=0){
        cout<<"Phuong trinh co 1 nghiem la "<<  (-b)/a;
    }
}
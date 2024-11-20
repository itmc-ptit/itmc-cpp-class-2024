#include <iostream>
using namespace std;
int main(){
    float a,b,x;
    cout<<"nhap a:";cin>>a;
    cout<<"nhap b:";cin>>b;
    cout<<"phuong trinh co dang:"<<a<<"x+"<<b<<"=0"<<endl;
    if(a==0){
        if(b==0){
            cout<<"phuong trinh vsn";
        }else {
            cout<<"phuong trinh vo nghiem";
        }
    }
    else{
        x=-b/a;
        cout<<"phuong trinh co 1 nghiem x="<<x;
    }
}
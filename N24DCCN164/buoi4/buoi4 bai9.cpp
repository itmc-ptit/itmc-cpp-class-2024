#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,delta,x1,x2,x;
    cout<<"nhap 3 so a b c:";
    cin>>a>>b>>c;
    cout<<"phuong trinh co dang:"<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"phuong trinh co vsn";
            }else {
                cout<<"phuong trinh vo nghiem";
            }
        }else{
            x=-c/b;
            cout<<"phuong trinh co 1 nghiem x="<<x;
        }
    } else{
        delta=b*b-4*a*c;
    if(delta<0){
        cout<<"phuong tinh vo nghiem";
    }else if(delta==0){
        x1=x2=-b/2*a;
        cout<<"phuong trinh co 2 nghiem kep x1=x2="<<x1;
    }else{
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        cout<<"phuong trinh co 2 nghiem phan biet x1="<<x1<<" "<<"x2="<<x2;
        }
          }
}
//9
#include <bits/stdc++.h>
using namespace std;
int main(){
    //ax^2+bx+c=0
    int a,b,c;
    float d,x1,x2;
    cout<<"nhap a: ";cin>>a;
    cout<<"nhap b: ";cin>>b;
    cout<<"nhap c: ";cin>>c;
    if (a==0){
        if(b==0){
            if(c==0){
                cout<<"phuong trinh vo so nghiem";
            } else {
                cout<<"phuong trinh vo nghiem";
            }
        } else {
            cout<<"phuong trinh co mot nghiem x = "<<-c/b;
        } 
    } else {
        d=b*b-4*a*c;
        if (d<0){
            cout<<"phuong trinh vo nghiem";
        } else if (d==0){
            cout<<"phuong trinh co nghiem kep x1 = x2 = "<<-b/2*a;
        } else{
            x1=(-b-sqrt(d))/2*a;
            x2=(-b+sqrt(d))/2*a;
            cout<<"phuong trinh co 2 nghiem: \n";
            cout<<"x1 = "<<x1<<"\n";
            cout<<"x2 = "<<x2<<"\n";
        }
    }
    return 0;
}
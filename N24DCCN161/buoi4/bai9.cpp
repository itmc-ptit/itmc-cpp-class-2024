#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    if (a==0){
        if (b==0){
            if (c==0){
                cout<<"Vo so Nghiem";
            } else{
                cout<<"Vo nghiem";
            }
        }else{
            cout<<"Co 1 Nghiem:"<<(float)(-c/b);
        }
    }else{
        int d=b*b-4*a*c;
        if (d<0){
            cout<<"Phuong Trinh Vo Nghiem";
        }else if (d==0){
            cout<<"Phuong Trinh Co Nghiem Kep:"<<fixed<<setprecision(2)<<(float)(-b/2*a);
        }else{
            cout<<"Phuong Trinh Co 2 Nghiem Phan Biet:"<<fixed<<setprecision(2)<<(float)((-b+sqrt(d))/(2*a))<<' '<<(float)((-b-sqrt(d))/(2*a))<<endl;
        }
    }
    return 0;
}
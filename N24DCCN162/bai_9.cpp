#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,d;
    cout<<"Phuong trinh ax^2 + bx + c = 0"<<endl;
    cout<<"Hay nhap cac so a, b, c"<<endl;
    cin>>a>>b>>c;
    d= b*b-4*(a*c);
    if (a!=0){
    if (d==0){
        float k=(-b)/(2*a);
        cout << "PT co 1 nghiem kep la: "<<k;
    }else if(d>0){
        float e,f;
        e=((-b)+sqrt(d))/(2*a);
        f=((-b)-sqrt(d))/(2*a);
        cout << "PT co 2 nghiem la: "<< e <<" va "<< f;
    }else if(d<0){
        float p,x;
        p=-b/(2*a);
        x=sqrt(-d)/(2*a);
        cout << "PT co nghiem thuc la: "<< p <<" va nghiem phuc la: "<< x;
    }
}
}



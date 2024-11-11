#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;
    if (a==0){
        if (b==0){
            if (c==0) {
            cout << "Phuong trinh vo so nghiem";
            } else {
            cout << "Phuong trinh vo nghiem";
             }
       } else {
        double x = -c/b;
        cout << "Phuong trinh co nghiem " << x << endl;
        }
    } 
    else {
        double denta=b*b-4*a*c;
        if (denta>0) {
            double x1=(-b+sqrt(denta))/2*a;
            double x2=(-b-sqrt(denta))/2*a;
            cout << "Phuong trinh co 2 nghiem phan biet: " << "x1=" << x1 << " x2=" << x2 << endl;
        } else if (denta==0){
            double x12=-b/2*a;
            cout << "Phuong trinh cos nghiem kep: " << x12 << endl;
        } else {
            cout << "Phuong trinh vo nghiem"<<endl;
        }
    }
return 0;
}

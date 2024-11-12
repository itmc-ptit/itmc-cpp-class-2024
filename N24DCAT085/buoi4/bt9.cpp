#include <iostream>
#include <cmath>
using namespace std;
main (){
    int a,b,c;
    cout<<"nhap a ";cin>>a;
    cout<<"nhap b ";cin>>b;
    cout<<"nhap c ";cin>>c;
    double denta,x1,x2,x0;
    denta=pow(b,2)-4*a*c;
    if (denta>0){x1=(-b+sqrt(denta))/2*a;x2=(-b-sqrt(denta))/2*a;
    cout<<"x1= "<<x1<<endl;
    cout<<"x2= "<<x2;}
    else if (denta==0) {x0=-b/2*a;cout<<x0;}
    else {cout<<"phuong trinh vo nghiem ";}

}
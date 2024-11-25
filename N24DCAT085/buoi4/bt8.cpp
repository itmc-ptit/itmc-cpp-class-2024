#include <iostream>
#include <cmath>
using namespace std;
main (){
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c&&a+c>b&&b+c>>a) 
    {if (a==b==c) {cout<<"do la tam giac deu ";
    } else if (a==b||a==c||c==b) {cout<<"do la tam giac can ";
    } else if (pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(b,2)+pow(c,2)==pow(a,2)) {cout<<"do la tam giac vuong ";}
    else {cout<<"do la tam giac binh thuong ";}}
    else {cout<<"do k pk tam giac";}
}
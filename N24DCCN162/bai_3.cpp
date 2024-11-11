#include<iostream>
#include<cmath>
using namespace std;
int main (){
    float a,b;
    cout <<"Hay nhap 1 so"<< endl;
    cin >> a;
    b = sqrt(a)-int(sqrt(a));
    if (b == 0)
    {
        cout <<  a << " la so chinh phuong";
    }else{
        cout <<a <<" khong phai so chinh phuong";
    }
    return 0;
}
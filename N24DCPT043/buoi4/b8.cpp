#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a,b,c;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;
    if (a+b<=c||a+c<=b||c+b<=a){
        cout << "Khong phai la tam giac";
    }
    else if (a==b,b==c) {
        cout << "La tam giac deu";
    }
    else if (a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
        cout << "La tam giac vuong";
    }
    else if (a==b||a==c||c==b){
        cout << "La tam giac can";
    }
else {
    cout << "La tam giac thuong";
}
return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a,b; 
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    if (a==0) {
        if (b==0){
            cout << "Phuong trinh vo so nghiem";
        } else {
            cout << "Phuong trinh vo nghiem";
        }
    } else {
        double x = -b/a;
        cout << "Phuong trinh co nghiem " << x << endl;
    }
return 0;

}
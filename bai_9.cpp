#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c,d;
    cout <<"Phuong trinh ax^2 + bx + c = 0" << endl;
    cout <<"Hay nhap cac so a, b, c" << endl;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Phuong trinh co vo so nghiem";
            } else {
                cout << "Phuong trinh vo nghiem";
            }
        } else {
            cout <<"Phuong trinh co 1 nghiem la " << (-c)/b;
        }
    } else {
        d = b * b - 4 * a * c;
        if (d == 0) {
            float k = -b / (2 * a);
            cout << "Phuong trinh co 1 nghiem kep la: " << k;
        } else if (d > 0) {
            float e, f;
            e = (-b + sqrt(d)) / (2* a);
            f = (-b - sqrt(d)) / (2 *a);
            cout << "Phuong trinh co 2 nghiem la: " <<e<< " va "<<f;
        } else {
            cout <<"Phuong trinh vo nghiem";
        }
    }
    return 0;
}

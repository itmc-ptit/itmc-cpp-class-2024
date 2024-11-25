#include <iostream>
using namespace std;
int main () {
int so;
int demChan =0;
int demLe = 0;
while (true) {
    cout << "Hay nhap 1 so nguyen (nhap so am de ket thuc): ";
    cin >> so;
    if (so % 2==0) {
        demChan++;
    } else {
        demLe++;
    }

    if ( so < 0) {
        break;
    }
}
cout << "so luong so chan: " << demChan << endl;
cout << "so luong so le: " << demLe << endl;

    return 0;
}

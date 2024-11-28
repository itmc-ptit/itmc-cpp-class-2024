#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, khoangcach;
    cout << "toa do diem 1 (x1,y1)";
    cin >> x1 >> y1;
    cout << "toa do diem 2 (x2,y2)";
    cin >> x2 >> y2;
    khoangcach= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Khoang cach"<<khoangcach;
}
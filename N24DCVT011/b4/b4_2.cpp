#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1, x2, y1, y2;
    cout << "nhap toa do diem 1 ";
    cin >> x1 >> y1;
    cout << "nhap toa do diem 2 ";
    cin >> x2 >> y2;
    double kc = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    cout << "kc giua 2 diem " << kc;

}
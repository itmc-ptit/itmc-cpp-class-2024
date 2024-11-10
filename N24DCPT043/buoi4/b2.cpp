#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double x1,y1,x2,y2;
    cout << "Toa do diem A la: ";
    cin >> x1 >> y1;
    cout << "toa do diem B la: ";
    cin >> x2 >> y2;
    double d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout << "Khoang cach giua 2 diem la: " << d << endl;
    return 0;
}
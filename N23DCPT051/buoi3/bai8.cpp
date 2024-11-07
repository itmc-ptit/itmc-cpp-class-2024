#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a , b ;
    cout << "Nhap so thuc thu nhat: ";
    cin >> a;
    cout << "Nhap so thuc thu hai: ";
    cin >> b;
    float tong = a + b;
    cout << "Phan nguyen cua tong hai so la: " << fixed << setprecision(0) << tong<<endl;
    return 0;
}



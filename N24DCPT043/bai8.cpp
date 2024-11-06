#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float a , b ;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    float c =  static_cast<int>(a + b);
    cout << "Phan nguyen tong hai so: " << c << endl;
    return 0;
}
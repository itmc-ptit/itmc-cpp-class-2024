#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float a;
    cout << "Nhap so: ";
    cin >> a;
    float c = a - static_cast<int>(a);
    cout << "Phan thap phan la: " << c << endl;
    return 0;
}
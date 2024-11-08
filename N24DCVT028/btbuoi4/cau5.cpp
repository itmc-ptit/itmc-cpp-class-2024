#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, maxNum;

  
    cout << "nhap so thu nhat: ";
    cin >> a;
    maxNum = a;  

    cout << "nhap so thu hai: ";
    cin >> b;
    if (b > maxNum) maxNum = b;  

    cout << "nhap so thu ba: ";
    cin >> c;
    if (c > maxNum) maxNum = a;  

    cout << "nhap so thu tu: ";
    cin >> d;
    if (d > maxNum) maxNum = b;  

    // In ra số lớn nhất
    cout << "so lon nhat la: " << maxNum << endl;

    return 0;
}
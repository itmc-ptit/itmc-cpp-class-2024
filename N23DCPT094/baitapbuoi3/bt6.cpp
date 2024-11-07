#include <iostream>
using namespace std;
int main () {
    double number;
    cout << "nhap 1 so thuc: ";
    cin >> number;
    number = (int)(number * 100 + 0.5) / 100.0;
    cout << "so da nhap la: " << number << endl;
    return 0;
}
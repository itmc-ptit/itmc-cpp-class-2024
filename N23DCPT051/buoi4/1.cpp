#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "Nhap vao 1 ki tu chu: ";
    cin >> a;

    if (a >= 'A' && a <= 'Z') {
        cout << a << " la chu hoa." << endl;
    } else if (a >= 'a' && ch <= 'z') {
        cout << a << " la chu thuong." << endl;
    } else {
        cout << a << " khong phai la chu cai." << endl;
    }
    return 0;
}


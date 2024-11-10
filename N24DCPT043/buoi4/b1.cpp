#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "Nhap vao 1 ki tu: ";
    cin >> a;
    if (a >= 'A' && a <= 'Z') {
        cout << a << " La chu hoa";
    }else {
        cout << a << " La chu thuong" << endl;
    }
return 0;
}
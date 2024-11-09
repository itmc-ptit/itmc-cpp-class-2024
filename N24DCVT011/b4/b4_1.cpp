#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    if (a < 65 && a > 90 && a < 97 && a > 122) {
        cout << "nhap sai ";
    } else if (a >= 65 && a <= 90) {
        cout << "chu hoa" ;
    } else {
        cout << "chu thuong ";
    }
}
#include <iostream>
using namespace std;
int main () {
    int a;
cout << "nhap 1 so nguyen";
cin >> a;
for (int i = 2; i < a; i++) {
    if (a % i ==0) {
        cout << "khong phai la so nguyen to";
        break;
    } else {
        cout << " la so nguyen to";
        break;
    }
}

return 0;
}

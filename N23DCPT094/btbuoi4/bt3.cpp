#include <iostream>
#include <cmath>
using namespace std;

bool laSoChinhPhuong(int n) {
    if (n < 0) return false; 
    int canBacHai = sqrt(n); 
    return (canBacHai * canBacHai == n); 
}

int main() {
    int n;
    cout << "Nhap vao so n: ";
    cin >> n;

    if (laSoChinhPhuong(n)) {
        cout << n << " la so chinh phuong." << endl;
    } else {
        cout << n << " khong phai la so chinh phuong." << endl;
    }

    return 0;
}

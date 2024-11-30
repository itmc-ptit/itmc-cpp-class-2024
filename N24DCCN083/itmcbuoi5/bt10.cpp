#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    bool ktra = true; 
    int dem = 0;
    while (n % 2 == 0) {
        n /= 2;
        dem++;
    }
    if (dem > 0) {
        if (!ktra) cout << " x ";
        cout << "2";
        if (dem > 1) cout << "^" << dem;
        ktra = false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        dem = 0;
        while (n % i == 0) {
            n /= i;
            dem++;
        }
        if (dem > 0) {
            if (!ktra) cout << " x ";
            cout << i;
            if (dem > 1) cout << "^" << dem;
            ktra = false;
        }
    }
    if (n > 1) {
        if (!ktra) cout << " x ";
        cout << n;
    }
    cout << endl;
    return 0;
}

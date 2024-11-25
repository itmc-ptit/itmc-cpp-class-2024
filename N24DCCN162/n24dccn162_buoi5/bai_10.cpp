#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Hay nhap 1 so: ";
    cin >> n;
    if (n <= 1) {
        cout << "Khong co phan tich thua so nguyen to cho n <= 1." << endl;
        return 0;
    }cout << n << " = ";
    bool so=true;
    for (int i=2; i<= sqrt(n);i++) {
        int a = 0;
        while(n %i == 0) {
            a++;
            n/= i;
        }if(a > 0) {
            if(!so) {
                cout << " x ";
            }cout << i;
            if(a > 1) {
                cout<<"^"<<a;
            }so = false;
        }
    }
    if (n > 1) {
        if (!so) {
            cout << " x ";
        }cout << n;
    }cout << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "Nhap 1 so n: ";
    cin >> n;
    if (n<0) {
        cout << n << " la so chinh phuong" << endl;
    } else {
        int sqrt_n = sqrt (n);
        if (sqrt_n * sqrt(n)==n) {
            cout << n << " la so chinh phuong" << endl;
        } else {
            cout << n << " khong la so chinh phuong" << endl;
        }
    }
return 0;
}
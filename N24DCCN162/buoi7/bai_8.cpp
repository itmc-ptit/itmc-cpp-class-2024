#include <iostream>
using namespace std;
bool isPalindrome(int n) {
    int goc = n, doixung = 0;
    while (n > 0) {
        int donvi = n % 10;
        doixung = doixung * 10 + donvi;
        n /= 10;
    }   
    return goc == doixung;
}
int main() {
    int n;
    cout << "Nhap mot so: ";
    cin >> n;
    if (isPalindrome(n)) {
        cout << n << " la so doi xung." << endl;
    } else {
        cout << n << " khong la so doi xung." << endl;
    }
    return 0;
}

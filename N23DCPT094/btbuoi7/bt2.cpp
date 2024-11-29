#include <iostream>
using namespace std;

bool isPerfectNumber (int a) {
    int sum =0;
    for (int i=1; i<= a/2; i++) {
        if (a%i==0)
        sum+=i;
    }
    if (sum==a) return true;
    return false;
}
int main () {
    int n;
    cout << "Nhap 1 so nguyen: ";
    cin >> n;
    if (isPerfectNumber(n)) {
        cout << n << " la so hoan hao";
    
    } else {
        cout << n << " khong la so hoan hao";
    }
    return 0;
}
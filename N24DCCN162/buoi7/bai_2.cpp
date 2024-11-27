#include <iostream>
using namespace std;
bool sohoanhao(int n) {
    if (n <= 0) return false;
    int sum = 0; 
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    if (sohoanhao(n)) {
        cout << n << " la so hoan hao" << endl;
    } else {
        cout << n << " khong phai la so hoan hao" << endl;
    }
    return 0;
}

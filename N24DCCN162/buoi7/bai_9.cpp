#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1;
    int result;
    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}
int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "So Fibonacci thu " << n << " la: " << fibonacci(n) << endl;
    return 0;
}

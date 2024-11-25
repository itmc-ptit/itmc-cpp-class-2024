#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập vào một số nguyên dương: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        cout << n << " là số hoàn hảo." << endl;
    } else {
        cout << n << " không phải là số hoàn hảo." << endl;
    }

    return 0;
}

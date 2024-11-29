#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 2; i < n; i++) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập vào số nguyên dương n: ";
    cin >> n;

    cout << n << " = ";

    for (int i = 2; i * i <= n; i++) { 
        int count = 0;
        while (n % i == 0) { 
            n /= i;
            count++;
        }
        if (count > 0) {
            cout << i;
            if (count > 1) cout << "^" << count;
            if (n > 1) cout << " x ";
        }
    }
    
    if (n > 1) cout << n; 
    cout << endl;
    return 0;
}

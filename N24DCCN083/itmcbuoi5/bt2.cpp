#include <iostream>
using namespace std;
int main() {
 int n;
    cout << "Nhap  n: ";
    cin >> n;
    cout << "Bang cuu chuong cua " << n << "la:" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << "   " << n << " x " << i << " = " << n*i << endl;
    }
    return 0;
}

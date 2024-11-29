#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}
void printPrimesInRange(int start, int end) {
    if (start > end) {
        cout << "Khoang khong hop le" << endl;
        return;
    }
    cout << "Cac so nguyen to trong khoang (" << start << ", " << end << "): ";
    bool found = false;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "Khong co so nguyen to nao trong khoang nay";
    }
    cout << endl;
}
int main() {
    int start, end;
    cout << "Nhap start: ";
    cin >> start;
    cout << "Nhap end: ";
    cin >> end;
    printPrimesInRange(start, end);
    return 0;
}

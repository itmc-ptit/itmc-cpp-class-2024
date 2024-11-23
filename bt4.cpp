#include <iostream>
#include <cmath>  
using namespace std;
bool ktra(int n){
    if (n <= 1) return false;  
    if (n == 2) return true;  
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;  
}
int main() {
    int n;
    cin >> n;
    if (ktra(n)) {
        cout << n << " la snt";
    } else {
        cout << n << " khong la snt";
    }
    return 0;
}

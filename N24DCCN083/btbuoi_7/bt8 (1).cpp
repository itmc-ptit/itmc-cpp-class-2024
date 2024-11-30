#include <iostream>
using namespace std;
bool isPalindrome(int n) {
	int goc=n;
    int nghichdao= 0;  
    while (n > 0) {
        int phanduw = n % 10; 
        nghichdao = nghichdao * 10 + phanduw; 
        n /= 10;  
    }
    return goc==nghichdao;
}
int main() {
    int n;
    cin >> n;

    if (isPalindrome(n)) {
        cout << "so dx" << endl;
    } else {
        cout << "so k dx" << endl;
    }
    return 0;
}

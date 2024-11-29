#include <iostream>

using namespace std;

int sumOddNumber(int arr[1000], int n) {
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i]; 
        }
    }
    return sum;
}

int main() {
    int n;
    int arr[1000];
    cin >> n; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    cout << sumOddNumber(arr, n); 
    return 0;
}

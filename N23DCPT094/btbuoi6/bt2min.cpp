#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "nhap so luong phan tu: ";
    cin >> n; 
    int a[1000];
    for (int i = 0; i < n ; i ++)
    {
        cin >> a [i];
    }
    int min = a [0];
    for (int i=0; i<n ; i++) {
        if (a [i] <  min) {
            min = a[i];
        }
    }
    cout << min;
    return 0;
}
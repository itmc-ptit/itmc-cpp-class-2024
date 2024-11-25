#include <bits/stdc++.h>
using namespace std;
bool Prime(int n) {
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0){
            return false; 
        }
    }
    return true;
}
int main() {
    int n,a[1000],k=0,b[1000],h=0,d[1000],f=0;
    cout << "nhap 1 so: ";cin >> n;
    for (int i = 2; i < n; i++) {
        if (Prime(i)==true) {
            a[k]= i;
            k++;
        }
    }
    for (int m=0;m<k;m++){
        while(n%a[m]==0){
            n=n/a[m];
            b[h]=a[m];
            h++;
        }
    }
    for (int i = 0; i < h; ) {
        int c = 1;
        while (i + 1 < h && b[i] == b[i + 1]) {
            c++;
            i++;
        }
        cout << b[i];
        if (c > 1) {
            cout << "^" << c;
        }
        if (i + 1 < h) {
            cout << "x";
        }
        i++;
    }
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Nhap so cay thong: ";
    cin >> n;
    cout << "Nhap so tang cay thong: ";
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int kc = m - i;
        for (int j = 1; j <= n; j++) {
            for (int k=kc; k>0; k--) {
                cout << " ";
            }
            for (int k = 1; k <= 2*i - 1; k++) {
                cout << "*";
            }
            if (j < n) {
                for (int k=kc; k>0; k--) {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j=1;j<=m-1;j++){
            cout<<" ";
        }
        cout<<"*";
        for (int j=1;j<=m-1;j++){
            cout<<" ";
        }
    }
    return 0;
}

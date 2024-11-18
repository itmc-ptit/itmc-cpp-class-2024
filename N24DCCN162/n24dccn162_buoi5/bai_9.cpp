#include <iostream>
using namespace std;
int main() {
    int h, l;
    cout << "Nhap chieu cao cua cay thong: ";
    cin >> h;
    cout << "Nhap so luong cay thong theo chieu ngang: ";
    cin >> l;
    for (int i = 1; i <= h; i++) { 
        for (int cay =1;cay <=l; cay++) { 
            for (int j = 1; j <= h - i; j++) {
                cout << " ";
            } for (int k=1; k<=2 *i-1; k++) {
                cout << "*";
            } for (int j=1; j<=h -i; j++) {
                cout << " ";
            }
        }cout<< endl;
    }for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= h - 1; j++) {
            cout<< " ";
        }
        cout<< "*";
        for (int j = 1; j <= h - 1; j++) {
            cout<< " ";
        }
    }
    cout<<endl;
    return 0;
}

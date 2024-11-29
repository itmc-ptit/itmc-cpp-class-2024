#include <iostream>
using namespace std;

int main(){
    int n;
    int tong = 0;
    int tich = 1;
    cout << "Nhap so luong phan tu:";
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cout << "Nhap phan tu thu " << i+1<< ":";
        cin >> a[i];
        tong += a[i];
        tich *= a[i];
    }
    float tb = float(tong)/float(n);
    cout << "Tong: " << tong << endl << "Tich: " << tich << endl << "Gia tri trung binh: " << tb << endl;
    return 0;
}
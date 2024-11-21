#include <iostream>
using namespace std;

int main(){
    int n, dem1, ss;
    int dem2 = 0;
    cout << "Nhap so phan tu:";
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cout << "Nhap phan tu thu " << i+1<< ":";
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        dem1 = 0;
        for(int j = 0;j < n;j++){
            if(a[i] == a[j]){
                dem1++;
                if(dem1 >= dem2 ){
                    ss = a[i];
                    dem2 = dem1;
                }
            }
        }
    }
    cout << "Phan tu co tan suat xuat hien nhieu nhat trong mang la " << ss << " va xuat hien " << dem2 << " lan";
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a;
    int n = 2;
    cout << "Nhap so:";
    cin >> a;
    while(a > 1){
        int dem = 0;
        if(a % n == 0){
            while((a % n) == 0){
                dem++;
                a = a/n;
            }
            if(dem == 1){
                cout << n;
                if(a > 1){
                cout << " x ";
                }
            }
            if(dem > 1){
                cout << n << "^" << dem;
                if(a > 1){
                cout << " x ";
                }
            }
        }else{
            n++;
        }
    }
    if(a != 1){
        cout << a;
    }
    return 0;
}
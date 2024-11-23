#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, dem;
    dem = 0;
    cout << "Nhap so:";
    cin >> a;
    if(a < 2){
        cout << a << " khong phai la so nguyen to";
    }else{
        for(int i = 2;i < sqrt(a);i++){
            if(a % i == 0){
                dem++;
                break;
            }
        }
    }
    if(dem>0){
        cout << a << " khong la so nguyen to";
    }else{
        cout << a << " la so nguyen to";
    }
    return 0;
}
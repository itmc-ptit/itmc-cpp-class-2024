#include <iostream>
using namespace std;

int main(){
    float a, b, c, d;
    cout << "Nhap 4 so:";
    cin >> a >> b >> c >> d;
    if((a > b) && (a > c) && (a > d)){
        cout << a << " la so lon nhat";
        return 0;
    }
    if((b > a) && (b > c) && (b > d)){
        cout << b << " la so lon nhat";
        return 0;
    }
    if((c > a) && (c > b) && (c > d)){
        cout << c << " la so lon nhat";
        return 0;
    } 
    else{
        cout << d << " la so lon nhat";
        return 0;
    }
}
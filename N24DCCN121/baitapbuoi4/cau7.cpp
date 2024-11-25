#include <iostream>
using namespace std;

int main(){
    float a, b;
    cout << "Giai phuong trinh ax + b = 0" << endl << "Nhap he so a:";
    cin >> a;
    cout << "Nhap he so b:";
    cin >> b;
    if(a==0 && b!=0){
        cout << "Phuong trinh vo nghiem";
        return 0;
    }
    if(a==0 && b==0){
        cout << "Phuong trinh co vo so nghiem";
        return 0;
    }
    else{
        cout << "Phuong trinh co nghiem x = " << -b/a;
        return 0;
    }
}
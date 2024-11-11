#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c;
    cout << "Giai phuong trinh ax^2 + bx + c = 0" << endl << "Nhap he so a:";
    cin >> a;
    cout << "Nhap he so b:";
    cin >> b;
    cout << "Nhap he so c:";
    cin >> c;
    if(a == 0){
        if(b == 0 && c != 0){
        cout << "Phuong trinh vo nghiem";
        return 0;
        }
        if(b == 0 && c == 0){
        cout << "Phuong trinh co vo so nghiem";
        return 0;
        }else{
        cout << "Phuong trinh co nghiem x = " << -c/b;
        return 0;
        }
    }else{
        float delta = (float)((b*b)-(4*a*c));
        if(delta < 0){
            cout << "Phuong trinh vo nghiem";
            return 0;
        } 
        if(delta == 0){
            cout << "Phuong trinh co mot nghiem x = " << -b/(2*a);
            return 0;
        }
        else{
            cout << "Phuong trinh co hai nghiem x1 x2" << endl << "x1 = " << (-b + sqrt(delta))/(2*a) << endl << "x2 = " << (-b - sqrt(delta))/(2*a);
            return 0;
        }
    }
}
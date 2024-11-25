#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cout << "Nhap do dai canh 1:";
    cin >> a;
    cout << "Nhap do dai canh 2:";
    cin >> b;
    cout << "Nhap do dai canh 3:";
    cin >> c;
    if(((a + b) > c) && ((b + c) > a) && ((a + c) > b)){
        if((a == b) && (a == c) && (b == c)){
            cout << "Day la tam giac deu";
            return 0;
        }else if((a == b) || (a == c) || (b == c)){
            if(((b*b + c*c) == a*a) || ((a*a + b*b) == c*c) || ((a*a + c*c) == b*b)){
                cout << "Day la tam giac vuong can";
                return 0;
            }else{
                cout << "Day la tam giac can";
                return 0;
            }
        }else if(((b*b + c*c) == a*a) || ((a*a + b*b) == c*c) || ((a*a + c*c) == b*b)){
            cout << "Day la tam giac vuong";
            return 0;
        }else{
            cout << "Day la tam giac thuong";
            return 0;
        }
    }else{
        cout << "Day khong phai la tam giac";
        return 0;
    }
}
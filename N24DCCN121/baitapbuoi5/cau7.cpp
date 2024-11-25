#include <iostream>
using namespace std;

int main(){
    int a;
    while(a != 24){
        cout << "Nhap so:";
        cin >> a;
        if(a < 24){
            cout << a << " nho hon so can doan" << endl;
        }
        if(a > 24){
            cout << a << " lon hon so can doan" << endl;
        }
        if(a == 24){
            cout << "Dung roi!";
            break;
        } 
    }
    return 0;
}
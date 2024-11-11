#include <iostream>
using namespace std;

int main(){
    float a;
    cout << "Nhap so thu nhat:";
    cin >> a;
    float max = float(a);
    cout << "Nhap so thu hai:";
    cin >> a;
    if(a > max){
       max = a; 
    }
    cout << "Nhap so thu ba:";
    cin >> a;
    if(a > max){
       max = a; 
    }
    cout << "Nhap so thu tu:";
    cin >> a;
    if(a > max){
       max = a; 
    }
    cout << a << " la so lon nhat";
    return 0;
}
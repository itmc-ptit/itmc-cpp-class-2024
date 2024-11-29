//Cho số n nhập từ bàn phím. Phân tích n ra thừa số nguyên tố và in ra màn hình
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"mới nhập số: ";
    cin>>a;

    cout<<a<<" = ";
    bool dk = true;

    for ( int i = 2; i <= a; i++){
        int t = 0;
        while (a % i == 0){
            a /= i;
            t++;
        }
        if (t > 0){
            if (!dk) {cout << " x ";}
            cout<<i;
            if (t > 1) {cout << "^" << t;}
            dk = false; 
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if((((a%4) == 0) && ((a%100)) != 0) || ((a%4) == 0)){
        cout << a << " la nam nhuan";
        return 0;
    }
    else{
        cout << a << " khong la nam nhuan";
    }
}
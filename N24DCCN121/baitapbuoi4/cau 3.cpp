#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a;
    cin >> a;
    if( (float)(sqrt(a)) == (int)(sqrt(a)) ){
        cout << a << " la so chinh phuong";
        return 0;
    }
    else{
        cout << a << " khong la so chinh phuong";
        return 0;
    }
}
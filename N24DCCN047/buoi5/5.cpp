//In tất cả các số nguyên tố nhỏ hơn n. Với n được nhập từ bàn phím
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cout<<"nhập một số: ";
    cin>>a;

    for ( int o = 1; o < a ; o++){
        bool hoho = true;
        for ( int i = 2 ; i <= sqrt(o) ; i++){
            if (o%i == 0){
                hoho = false;
                break;
            }
        }
        if (hoho){
            cout << o << " ";
        }
    }
    return 0;
}
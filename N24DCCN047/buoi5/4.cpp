//Sử dụng loop trong C++ kiểm tra 1 số nhập từ bàn phím có phải là số nguyên tố hay không?
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cout<<"nhập một số: ";
    cin>>a;

    if (a < 2){
        cout<<a<<" không phải là số nguyên tố"<<endl;
        return 0;
    }

    for ( int i = 2 ; i <= sqrt(a) ; i++){
        if (a%i == 0){
            cout<<a<<" không phải là số nguyên tố"<<endl;
            return 0;
        }
    }
    
    cout<<a<<" là số nguyên tố"<<endl;
    return 0;
}
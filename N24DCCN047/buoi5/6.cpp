//Viết chương trình kiểm tra 1 số nhập từ bàn phím có phải số hoàn hảo hay không?
#include <iostream>
using namespace std;

int main(){
    int a;
    int b=0;
    cout << "nhập một số: ";
    cin>>a;

    for ( int i = 1; i <= a/2; i++){
        if (a%i == 0){
            b += i;
        }
    }
    
    if (b == a){
        cout << a << " là số hảo hảo"<< endl;
    }
    else {
        cout << a << " là số không hảo rồi ;c"<< endl;
    }
    return 0;
}
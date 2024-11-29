#include <iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    int b = char(a);
    if(b >=97 && b <=122){
        cout << a << " la chu thuong!";
        return 0;
    }
    if(b >= 65 && b <= 90){
        cout << a << " la chu hoa!";
        return 0;
    }
    else{
        cout << "Ky tu khong hop le!";
    }
}
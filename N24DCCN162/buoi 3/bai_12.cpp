#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int a;
    cout << "Nhap 1 so bat ki tu 0 den 225 : ";
    cin >> a;
    if (a >= 0 && a<= 225 )
    {
        char c = static_cast<char>(a);
        cout << "Ma Ascii tuong ung cua so do la; "<< c;
    }else {
        cout<<"So cua ban chon nam ngoai bang gia tri cua Ascii";
    }
    
return 0;
}

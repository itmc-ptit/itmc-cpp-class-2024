//Viết chương trình nhập vào 1 chữ cái in hoa. In ra màn hình chữ cái thường của chữ cái đó và ngược lại.
#include <iostream>
using namespace std;

int main() 
{
    char a;
    cout<<"Mời nhập một chữ in HOA: ";
    cin>>a;
    cout<<"Chữ in thường là: "<<char(a+32)<<endl;
    char b;
    cout<<"Mời nhập một chữ in THƯỜNG: ";
    cin>>b;
    cout<<"Chữ in hoa là: "<<char(b-32)<<endl;
    return 0;
}
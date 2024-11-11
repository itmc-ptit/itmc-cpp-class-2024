//Viết chương trình nhập vào một kí tự bất kì. In ra màn hình mã ASCII của kí tự đó
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Nhập một kí tự bất kì: ";
    cin>>a;
    cout<<"Mã ASCII của kí tự đó "<<a<<" là: "<<int(a)<<endl;
    return 0;
}
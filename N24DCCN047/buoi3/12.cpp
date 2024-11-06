//Viết chương trình nhập vào một số bất kì từ(0-255). In ra màn hình kí tự tương ứng với mã ASCII của số đó
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Xin mời nhập một số bất kì từ(0-255):";
    cin>>a;
    cout<<"Kí tự tương ứng với mã ASCII của số đó là: "<<char(a)<<endl;
    return 0;
}

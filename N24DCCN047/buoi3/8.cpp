//Viết chương trình nhập vào 2 số thực. In ra màn hình phần nguyên tổng của 2 số đó
#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    cout<<"nhập số thực a: ";
    cin>>a;
    cout<<"nhập số thực b: ";
    cin>>b;
    int c = (int)a+(int)b;
    cout<<"tổng phần nguyên của hai số thực là: "<< c << endl;
    return 0;
}
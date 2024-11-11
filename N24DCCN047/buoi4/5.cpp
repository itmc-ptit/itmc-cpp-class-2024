//Viết chương trình in ra số lớn nhất trong bốn số nhập từ bàn phím với điều kiện chỉ được dùng hai biến
#include <iostream>
using namespace std;

int main ()
{
    float a, t;
    cout<<"nhập 4 số a,b,c,d:\n";
    cin>>a;
    t = a;

    cin>>a;
    if (a>t)
    {t=a;} 
    else {}

    cin>>a;
    if (a>t)
    {t=a;} 
    else {}

    cin>>a;
    if (a>t)
    {t=a;} 
    else {}

    cout<<"số lớn là: "<<t<<endl;
    return 0;
}
    

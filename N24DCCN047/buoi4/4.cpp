//Viết chương trình in ra số lớn nhất trong bốn số nhập từ bàn phím.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float a,b,c,d;
    cout<<"mời nhập các số a,b,c,d:\n";
    cin>>a>>b>>c>>d;
    float big = max({a,b,c,d});
    cout<<"số bự nhất là: "<<big<<endl;
    return 0;
}
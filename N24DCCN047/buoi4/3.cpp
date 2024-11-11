//Nhập vào 1 số n, kiểm tra số đó có phải là số chính phương hay không
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    cout<<"nhập vào một số bất kỳ: ";
    cin>>a;
    if (a < 0 ){
        cout<<"số được nhập âm phủ không xài được >:C";
        return 0;
    }
    float b = sqrt(a);
    cout<<b<<endl;
    if (fmod(b,1)==0)
    {
        cout<<a<<" là số chính phương"<<endl;
    }
    else {cout<<a<<" không là số chính phương"<<endl;}
}
//Viết chương trình giải phương trình ax + b = 0 (Các hệ số a, b được nhập từ bàn phím). Nhớ xét trường hợp khi a = 0 hoặc b = 0
#include <iostream>
using namespace std;

int main()
{
    float a,b,x;
    cout<<"mời nhập các hệ số a,b:";
    cin>>a>>b;
    if (a==0)
    {
        if (b==0)
        {
            cout<<"phương trình vô số nghiệm"<<endl;
        }
        else {cout<<"phương trình vô nghiệm"<<endl;}
    }
    else {
        x= -b /a;
        cout <<x<< " là nghiệm phương trình"<<endl;
        }
    return 0;
}
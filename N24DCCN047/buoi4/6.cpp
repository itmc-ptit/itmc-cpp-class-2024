#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"nhập năm: ";
    cin>>a;

    if ((a%4==0 && a%100!=0)||(a%400==0))
    {
        cout<<a<<" là năm nhuận"<<endl;
    }
    else {cout<<a<<" không là năm nhuận"<<endl;}
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    double a,b;
    cout <<"nhap he so a,b cua pt ax+b=0 ";
    cin >>a>>b;
    if (a==0)
        cout <<"pt vo nghiem";
    else 
        if (b==0)
            cout <<"nghiem cau pt la x=0 ";
        else
            cout <<"ngiem cua pt la x="<<-b/a;
}
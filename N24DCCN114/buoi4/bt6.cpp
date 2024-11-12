#include <iostream>
using namespace std;
int main()
{
    int nam;
    cout <<"nhap nam can kiem tra ";
    cin >>nam;
    if ((nam%4==0)&&(nam%100!=0)||(nam%400==0))
    cout <<nam<<" la nam nhuan ";
    else
    cout <<nam<<" khong phai la nam nhuan ";
}
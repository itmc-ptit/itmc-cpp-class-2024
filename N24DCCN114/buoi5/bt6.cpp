#include <iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cout <<"nhap vao 1 so ";
    cin >>a;
    for (int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum +=i;
        }
    }
    if (sum==a){
        cout <<a<<" la so hoan hao";
    }
    else {
        cout <<a<<" khong phai la so hoan hao";
    }
}
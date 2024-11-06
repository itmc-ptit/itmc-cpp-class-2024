#include <iostream>
using namespace std;
int main()
{
    int songuyen1,songuyen2;
    cout <<"nhap 2 so nguyen ";
    cin >>songuyen1>>songuyen2;
    songuyen1 =songuyen1+songuyen2;
    songuyen2 =songuyen1-songuyen2;
    songuyen1=songuyen1-songuyen2;
    cout <<"songuyen 1 la "<<songuyen1<<endl;
    cout <<"songuyen 2 la "<<songuyen2<<endl;

}
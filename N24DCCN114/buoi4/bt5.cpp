#include <iostream>
using namespace std;
int main()
{
    double a,max;
    cout <<"nhap so thu nhat ";
    cin >>a;
    max=a;
    cout <<"nhap so thu hai ";
    cin >>a;
    if(max<a)
        max = a;
    cout <<"nhap so thu ba ";
    cin >>a;
    if(max<a)
        max = a;   
    cout <<"nhap so thu tu ";
    cin >>a;
    if(max<a)
        max = a;
    cout <<"so lon nhat trong 4 so la "<<max;

}
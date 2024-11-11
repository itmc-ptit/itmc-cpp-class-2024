#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin >>x1>>y1>>x2>>y2;
    double kcach=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout << "khoang cach giua hai diem la " << kcach ;
    return 0;
}
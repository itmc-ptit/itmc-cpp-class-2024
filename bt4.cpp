#include <iostream>
using namespace std;
int main()
{
    int max , b , c , d;
    cin >> max >> b >> c >> d;
    if ( b >= max )
    {
        max = b;
    }
    if(c>= max)
    {
        max = c;
    }
    if(d>= max)
    {
        max = d;
    }
    cout <<  max;
   return 0;
}

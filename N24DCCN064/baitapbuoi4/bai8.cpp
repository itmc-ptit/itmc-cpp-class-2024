#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if(a<b+c && b<a+c && c<a+b)
    {
        if(a==b && b==c && a==c)
        {
            cout <<"tam giac deu";
            return 0;
        }
        else if(a==b || b==c || a==c)
        {
            cout << "tam giac can";
            return 0;
        }
        else if( pow(a,2)+pow(b,2)==pow(c,2) || pow(c,2)+pow(b,2)==pow(a,2) || pow(a,2)+pow(c,2)==pow(b,2))
        {
            cout << "tam giac vuong";
            return 0;
        }
        else 
        {
            cout <<"tam giac thuong";
            return 0;
        }
           
    }
    else
    {
        cout <<"khong la tam giac";
        return 0;
    }

}




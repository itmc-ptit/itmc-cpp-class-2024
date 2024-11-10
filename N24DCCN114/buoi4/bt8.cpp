#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout <<"nhap do dai 3 canh cua tam giac ";
    cin >>a>>b>>c;

    if((a>=b+c)||(b>=a+c)||(c>=a+b))
        cout <<"day khong phai tam giac";
    else
        if((a==b)&&(a==c))
            cout <<"day la tam giac deu ";
        else 
            if((a==b)||(a==c)||(b==c))
                cout <<"day la tam giac can ";
            else
                if(a*a==b*b+c*c)
                    cout <<"day la tam giac vuong ";
                else
                    if(b*b==a*a+c*c)
                        cout <<"day la tam giac vuong ";
                    else
                        if(c*c==b*b+a*a)
                            cout <<"day la tam giac vuong ";
                        else
                            cout <<"day la tam giac thuong ";
}

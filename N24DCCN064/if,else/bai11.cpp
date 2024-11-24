#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a; cin >> a;
    int ch;
    int dv;
    if(a>=1 && a<=99)
    {
        ch=a/10;
        dv=a%10;
        switch(ch)
        {
            case 1: cout <<"muoi ";; break;
            case 2: cout <<"hai muoi ";; break;
            case 3: cout <<"ba muoi ";; break;
            case 4: cout <<"bon muoi ";; break;
            case 5: cout <<"nam muoi ";; break;
            case 6: cout <<"sau muoi ";; break;
            case 7: cout <<"bay muoi ";; break;
            case 8: cout <<"tam muoi ";; break;
            case 9: cout <<"chin muoi ";; break;

        }
        switch (dv)
        {
            case 1: cout <<"mot";; break;
            case 2: cout <<"hai ";; break;
            case 3: cout <<"ba ";; break;
            case 4: cout <<"bon";; break;
            case 5:
            {
                if(ch==0)
                {
                    cout <<"nam";

                }
                else
                {
                    cout << "lam";
                }
                break;
            }
            case 6: cout <<"sau";; break;
            case 7: cout <<"bay";; break;
            case 8: cout <<"tam";; break;
            case 9: cout <<"chin";; break;
        }
    }
}
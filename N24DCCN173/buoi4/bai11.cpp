#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a, b;
    string dv;
    string chuc = "a";
    while(n != 0)
    {
        a = n%10;
        n /= 10;
        switch (a)
        {
        case 1:
            dv = "mot";
            break;
        case 2:
            dv = "hai";
            break;
        case 3:
            dv = "ba";
            break;
        case 4:
            dv = "bon";
            break;
        case 5:
            dv = "nam";
            break;
        case 6:
            dv = "sau";
            break;
        case 7:
            dv = "bay";
            break;
        case 8:
            dv = "tam";
            break;
        case 9:
            dv = "chin";
            break;
        case 0:
            break;
        }
        break;
    }
    while(n != 0)
    {
        b = n % 10;
        n/=10;
        switch (b)
        {
        case 1:
            chuc = "muoi";
            break;
        case 2:
            chuc = "hai muoi";
            break;
        case 3:
            chuc = "ba muoi";
            break;
        case 4:
            chuc = "bon muoi";
            break;
        case 5:
            chuc = "nam muoi";
            break;
        case 6:
            chuc = "sau muoi";
            break;
        case 7:
            chuc = "bay muoi";
            break;
        case 8:
            chuc = "tam muoi";
            break;
        case 9:
            chuc = "chin muoi";
            break;
        }
    }
    if(chuc != "a") cout << chuc << " " << dv << endl;
    else cout << dv << endl;
    return 0;
}
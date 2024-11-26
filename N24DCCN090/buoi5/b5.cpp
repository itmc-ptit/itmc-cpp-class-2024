#include <iostream>
#include <math.h>

using namespace std;

bool checkNgTo(int n)
{
    if (n == 1) return false;

    if (n%2!=0)

    for (int i = 3; i <= sqrt(n) ; i+=2)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int n = 0;

    cout << "hay nhap vao mot so nguyen va toi se in cac so nho hon no la so nguyen to: ";
    cin >> n;
    if (n>2) {
     cout <<"2 ";
            for ( int i = 3; i < n; i+=2)
    {
                if (checkNgTo(i)) 
                {
                    cout << i << "  ";
                }
    } }else if (n=2) cout << 2;
    cin >>n;
}
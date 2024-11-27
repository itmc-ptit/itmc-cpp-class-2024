#include<iostream>
using namespace std;

bool isPerfectNumber(int n)
{
    int dem=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            dem=dem+i;
        }
    }
    if(dem==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << isPerfectNumber(28);
}
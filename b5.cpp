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
void printPrimesInRange(int a, int b)
{
    if (a%2!=0 &&a>2) 
    {
        for ( int i = a; i <= b; i+=2)
        {
                if (checkNgTo(i)) 
                {
                    cout << i << "  ";
                }
        } 
    }else if (a==1)
    {   
        cout<<2<<" ";
        for ( int i = a; i <= b; i+=2)
        {
                if (checkNgTo(i)) 
                {
                    cout << i << "  ";
                }
        } 
    }
        if (a%2==0 && a>2) 
    {
        for ( int i = (a+1); i <= b; i+=2)
        {
                if (checkNgTo(i)) 
                {
                    cout << i << "  ";
                }
        } 
    }else if (a==2)
    {   
        cout<<2<<" ";
        for ( int i = (a=1); i <= b; i+=2)
        {
                if (checkNgTo(i)) 
                {
                    cout << i << "  ";
                }
        } 
    }
}

int main()
{
    int n,m;

    cout << "hay nhap vao mot so bat dau va ket thuc: ";
    cin >> n>>m;
    printPrimesInRange(n,m);
    
}
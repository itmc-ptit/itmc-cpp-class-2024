#include <iostream>

using namespace std;

bool isPerfectNumber(int n)
{
    int tong = 1;
    bool running = true;
    int i = 2;

    while (running)
    {
        if ((i+1)*(i+1) > n) running = false;
        if (i*i == n) 
        {
            tong = tong + i;
            running = false;
        }
        else if (n % i == 0) 
        {
            tong = tong + i;
            tong = tong + n/i;
        }

        i++;  
    }

    if (tong == n) return true;
    
    return false;
    
}

int main()
{
    int n = 0;
    cout << "hay nhap vao mot so nguyen: ";
    cin >> n;

    if ( isPerfectNumber(n))
    {
        cout << n << " la mot so hoan hao";
    }
    else
    {
        cout << n << " khong phai la mot so hoan hao";
    }
    

    cin >> n;
    
}
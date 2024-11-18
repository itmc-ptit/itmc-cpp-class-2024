#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "ban hay nhap mot so nguyen: ";
    cin >> n;

    int k = n;
    int i = 2;
    int m = 0;

    cout << n << " = ";
    while (k != 1)
    {
        if (k % i == 0)
        {
            m++;

            k = k/i;     

            if (k % i != 0)
            {
                if (m == 1)
                {
                    cout << i;

                    if (k != 1)
                    {
                        cout << " x ";
                    }
                }
                else if (m > 1)
                {
                    cout << i << "^" << m;
                    
                    if (k != 1)
                    {
                        cout << " x ";
                    }
                }
            }
             
        }
        else
        {
            i++; 
                    
            m = 0;
        }
    }    
}
#include<iostream>
#include<math.h>
using namespace std;

void printPrimesInRange(int start, int end) 
{
    int dem=0;
    for(int i=start; i<=end; i++)
    {
        if(i>=2)
        {
            for(int j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    dem++;
                }
            }
            if(dem==0)
            {
                cout << i << " ";
            }
            else{
                dem=0;
            }
        }
    }
}

int main()
{
    printPrimesInRange(2, 100);
}
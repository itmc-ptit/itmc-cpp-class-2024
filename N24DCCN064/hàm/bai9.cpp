#include<iostream>
using namespace std; //0 1 1 2 3 5 8 13 21 34

int fibonacci(int n) 
{
    int a=0; int b=1; int c=0;
    if(n<1)
    {
        return -1;
    }
    else if(n==1)
    {
        return 0;
    }
    
    else if(n>1)
    {
        for(int i=2; i<n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
      }
}
int main()
{
    cout << fibonacci(10);
}
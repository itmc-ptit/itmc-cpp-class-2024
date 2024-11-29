#include <iostream> 
#include <cmath>
using namespace std ;
bool nt(int n) 
{
    if ( n > 1 )
    {
        for ( int i = 2 ; i <= sqrt(n)  ; ++i )
        {
         if ( n % i == 0 )  {return false ;}
        }   
        return true  ;  
    }
    else { return false ; }
}
void printPrimesInRange(int start, int end)
{
    for ( int n = start ; n <= end ; ++n )
    {
        if ( nt(n) == true ) { cout << n << " " ; }
    }
}
int main()
{
    int a , b ; 
    cout << "moi nhap khoang gia tri " ; cin >> a >> b ; 
    printPrimesInRange(a,b) ; 
    return 0 ; 
}
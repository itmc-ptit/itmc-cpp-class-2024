#include <iostream> 
#include <cmath> 
using namespace std;
bool nt(int n) 
{
   if ( n == 1 ) { return false ; } 
   for ( int i = 2 ; i <= sqrt(n)  ; ++i ) { if ( n % i == 0 )  {return false ;}  }   return true  ; 
}
int z(int h,int k,int &cnt)
{
    while( h % k == 0 ) 
    {
        cnt++ ; h/=k ;
    }
    if ( cnt > 1 ) { cout << k << "^" << cnt ; if ( h > 1 ) { cout << "x" ; } }
    if ( cnt == 1 ) { cout << k  ; if ( h > 1 ) { cout << "x" ; } }
    if ( nt(h) == true  ) { cout <<  h ; }
    return h ; 
} 
int main() 
{
    int a , cnt = 0   ; 
    cout << " moi nhap so ban muon phan tich " ; cin >> a ; 
    int b = a ; 
    if ( a > 2 ) 
    {
       while ( a % 2 == 0 ) 
       { 
         cnt++ ; a/=2 ;      
       }
       if ( cnt > 1 ) { cout << "2^" << cnt ; if ( a != 1 ) { cout << "x" ; } }
       if ( cnt == 1 ) { cout << 2 << "x" ; }
       for ( int m = 3 ; m < sqrt(b) ; m += 2  )
       { 
         int cnt2 = 0 ; 
         if ( z(a,m,cnt2) != a) { if ( cnt2 == 1 ) { a/=m ; }
                                  else if ( cnt2 > 1 ) { a/=pow(m,cnt2) ;}   }
         if ( nt(a) == true ) { break ; } 
       }
    }
    else { cout << " ERROR! " ;}  
}
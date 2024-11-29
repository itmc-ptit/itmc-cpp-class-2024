#include <iostream> 
using namespace std ;

int hc(int k )
{
    switch ( k ) {
        case 1 :cout << " muoi " ; break ; 
        case 2 :cout << " hai muoi " ; break ;  
        case 3 :cout << " ba muoi "; break ;  
        case 4 :cout << " bon muoi " ; break ;  
        case 5 :cout << " nam muoi "  ; break ; 
        case 6 :cout << "sau muoi "  ; break ;  
        case 7 :cout << "bay muoi" ; break ;  
        case 8 :cout << "tam muoi" ; break ;  
        case 9 :cout << "chin muoi" ; break ; 
        return 0 ; 
    }  
}
int hdv( int h ) 
{
     switch ( h ) {
        case 1 :cout << "mot" ; break ; 
        case 2 :cout << "hai" ; break ;  
        case 3 :cout << "ba"; break ;  
        case 4 :cout << "bon" ; break ;  
        case 5 :cout << "nam"  ; break ; 
        case 6 :cout << "sau"  ; break ;  
        case 7 :cout << "bay" ; break ;  
        case 8 :cout << "tam" ; break ;  
        case 9 :cout << "chin" ; break ; 
        return 0 ; 
     }
}

int main()
{
    int  a , b , c   ;
    cout << " moi nhap a " ; cin >> a ; 
    b = a/10 ; c = a%10 ;  
    if ( a < 100 ) { if ( b == 0  )  { hdv(a) ;}  else if ( a == 0 )  {cout << " khong " ;}  else  { hc(b) ; hdv(c);  } }  
    else { cout << "ERROR!" ; }
    return 0 ;      
}
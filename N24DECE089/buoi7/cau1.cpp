#include <iostream> 
using namespace std ;
int findMin(int a[], int n )
{
    int min = a[0] ; 
    for ( int i = 0 ; i < n - 1 ; ++i ) { if ( min > a[i]  ) { min = a[i] ; } }
    cout << min ; 
    return 0 ; 
} 
int main() 
{
    int n  ; 
    cout << "moi nhap so luong phan tu : " ; cin >> n ; 
    int a[n] ;
    for ( int i = 0 ; i < n ; ++i ) { cin >> a[i] ; }
    cout << "gia tri nho nhat trong mang la :" ; 
    findMin(a , n) ;
    return 0 ;
}
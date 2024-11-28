#include <iostream> 
#include <string>
using namespace std ;
int sumOddNumbers(int arr[], int size)
{
    int sum = 0 ; 
    for ( int i = 0 ; i < size ; ++i ) 
    {
        if ( arr[i] % 2 != 0 )
        {
            sum += arr[i] ; 
        } 
    }
    return sum ; 
}
int main()
{
    int n ;
    cout << " moi nhap so luong phan tu : " ; cin >> n ;  
    int a[n] ; 
    for ( int i = 0 ; i < n ; ++i ) 
    {
        cin >> a[i] ; 
    }
    cout << "tong cac so le cua mang la : " << sumOddNumbers(a,n) ;
    return 0 ; 
}
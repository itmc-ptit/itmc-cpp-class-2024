#include <iostream> 
using namespace std ; 
bool isPalindrome(int n)
{
    int sum = 0 , a = n  ; 
    while ( n > 0 )
    {
        sum = sum*10 + n%10 ; 
        n /= 10 ; 
    }
    if ( sum == a ) { return true ;}
    else { return false ; }
}
int main()
{
    int n ; 
    cout << "moi nhap so : " ; cin >> n ; 
    if ( isPalindrome(n) == true ) 
    {
        cout << "day la so doi xung " ; 
    }
    else
    {
        cout << "day khong phai la so doi xung " ; 
    }
    return 0 ; 
}
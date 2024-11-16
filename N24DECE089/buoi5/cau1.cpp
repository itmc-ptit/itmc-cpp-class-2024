#include <iostream> 
using namespace std ; 
int main() 
{ 
    int a ; 
    int cnt1 = 0 , cnt2 = 0 ;  
    while(1) 
    {
        cout << " moi nhap a " ; 
        cin >> a ; 
        if ( a % 2 == 0 ) { ++cnt1 ;  }
        else if ( a > 0 && a % 2 != 0 ) { ++cnt2 ; }
        if ( a < 0 ) { break ; }
    }
    cout << " da nhap " << cnt1 << " so chan " << endl ; 
    cout << " da nhap " << cnt2 << " so le " ; 
    return 0 ; 
}
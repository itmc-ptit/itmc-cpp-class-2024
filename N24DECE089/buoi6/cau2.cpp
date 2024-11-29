#include <iostream> 
using namespace std ; 
int main() 
{
    int n  ; 
    cout << " moi nhap n " ; cin >> n ; 
    int a[n] ; 
    for (int i = 0 ; i < n ; ++i ) { cin >> a[i] ; } 
    int gtln = a[0] , gtnn = a[0] ; 
    for (int i = 1 ; i < n ; ++i ) { if ( a[i] > gtln ) { gtln = a[i] ; }
                                     if ( a[i] < gtnn ) { gtnn = a[i] ; }  }
    cout << "gia tri lon nhat cua mang la :" << gtln ; 
    cout << endl << "gia tri nho nhat cua mang la :" << gtnn ;
    return 0 ; 

}
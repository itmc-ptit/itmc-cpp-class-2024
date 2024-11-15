#include <iostream> 
#include <cmath> 
using namespace std ; 
int main() 
{
    double a , b , c , d  ; 
    cout << " moi nhap vao a , b , c ,d : " ; cin >> a >> b >> c >> d ; 
    cout << " gia tri lon nhat trong 4 so la " << max(max(a,b),max(c,d)) ;
    return 0 ;  

}
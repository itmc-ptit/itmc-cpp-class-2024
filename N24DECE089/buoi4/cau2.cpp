#include <iostream> 
#include <cmath> 
using namespace std ; 
int main () 
{
    double x1 , x2 , y1 , y2 , d  ; 
    cout << " moi nhap toa do diem a  " ; cin >> x1 >> y1 ; 
    cout << " moi nhap toa do diem b  " ; cin >> x2 >> y2 ;
    d = sqrt(  ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1) ))  ; 
    cout << " khoang cach giua hai diem la " << d ; 
    return 0 ; 

}
    

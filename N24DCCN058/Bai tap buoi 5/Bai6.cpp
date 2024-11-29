#include <iostream>
using namespace std;
int main() {
    int n , Sum = 0;
    cin >> n ;
    for (int i = 1 ; i <= n/2 ; i++){
        if ( n%i == 0){
            Sum = Sum + i ; 
        }
    }
    Sum == n ? cout << "la so hoan hao" : cout << "khong la so hoan hao" ; 
    return 0;
}

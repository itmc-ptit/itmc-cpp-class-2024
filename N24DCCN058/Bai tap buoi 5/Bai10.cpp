#include <iostream>

using namespace std;
int main() {
    int n , count = 0 ;
    cin >> n ; 
    for(int i = 2 ; i < n ; i++){
        count = 0 ;
        while ( n%i == 0){
            count++ ; 
            n /= i ;
        }
        if(count != 0 ){count == 1 ? cout << i << "x" : cout << i << "^" << count << (n == 1 ? "" : "x") ;}
    }
    if(count == 0){cout << n ; }
    return 0;
}

#include <iostream>

using namespace std;
int main() {
    int n ;
    cin >> n ; 
    for(int i = 2 ; i < n ; i++){
        int count = 0 ;
        while ( n%i == 0){
            count++ ; 
            n /= i ;
        }
        if(count != 0 ){count == 1 ? cout << i << "x" : cout << i << "^" << count << (n == 1 ? "" : "x") ;}
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n , dem = 0;
    bool check = true ; 
    cin >> n ;
    if ( n == 1){
        cout << 0;
        return 0 ; 
    }
    for (int i = 2 ; i < n+1 ; i++ ){
        for (int j = 2 ; j < sqrt(i) ;j++){
            if(i%j == 0){
                check = false ;
                break;}
        }
        if(check){dem++;}     
    }
    cout << dem ;
    return 0;
}

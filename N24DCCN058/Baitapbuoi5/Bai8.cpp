#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    int maxDay = (n-1)*2 + 1 , chuan = maxDay/2 + 1 ; 
    for ( int j = 0 ; j <= n  ; j++){
       for (int i = 1 ; i <= maxDay ; i++){
            int u = j ; 
            if (u == n){u=0;}
            int Min = chuan - u , Max = chuan + u ; 
            (i >= Min && i <= Max) ? cout << "*" : cout << " ";
        }
        cout << endl ; 
    }
    return 0;
}

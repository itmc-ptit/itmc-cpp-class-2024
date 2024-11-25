#include <iostream>
using namespace std;
int main() {
    int n , m;
    cin >> n >> m ;
    int maxDay = (m-1)*2 + 1 , chuan = maxDay/2 + 1 ;
    for ( int j = 0 ; j <= m ; j++){
        int z = 0 ; 
       for (int i = 1 ; i <= maxDay*n ; i++){
            int u = j ; 
            if(u == m){u = 0 ;}
            int Min = chuan - u , Max = chuan + u ; 
            (i >= maxDay*z + Min && i <= maxDay*z + Max ) ? cout << "*" : cout << " ";
            if ( i % maxDay == 0 && z <= n){z++;}
        }
        cout << endl ; 
    }
    return 0;
}

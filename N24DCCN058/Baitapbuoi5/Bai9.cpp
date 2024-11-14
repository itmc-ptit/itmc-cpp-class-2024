#include <iostream>
using namespace std;
int main() {
    int n , m;
    cin >> n >> m ;
    int maxDay = (m-1)*2 + 1 ;
    int chuan = maxDay/2 + 1 ;
    for ( int j = 0 ; j < m ; j++){
        int z = 0 ; 
       for (int i = 1 ; i <= maxDay*n ; i++){
            int Min = chuan - j ;
            int Max = chuan + j ; 
             i >= maxDay*z + Min && i <= maxDay*z + Max? cout << "*" : cout << " ";
            if ( i % maxDay == 0 && z <= n){z++;}
        }
        cout << endl ; 
    }
    int z = 0 ; 
    for (int i = 1 ; i <= maxDay*n ; i++){
             i == maxDay*z + chuan ? cout << "*" : cout << " ";
            if ( i % maxDay == 0 && z <= n){z++;}
        }
    return 0;
}

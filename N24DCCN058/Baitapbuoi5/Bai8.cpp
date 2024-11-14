#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    int maxDay = (n-1)*2 + 1 ;
    int chuan = maxDay/2 + 1 ; 
    for ( int j = 0 ; j < n ; j++){
       for (int i = 1 ; i <= maxDay ; i++){
            int Min = chuan - j ;
            int Max = chuan + j ; 
            i >= Min && i <= Max ? cout << "*" : cout << " ";
        }
        cout << endl ; 
    }
    for (int i = 1 ; i <= maxDay ; i++){
         i == chuan ? cout << "*" : cout << " " ;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std ;

int containsChar(string str, char c ){
    for (int i = 0 ; i < str.size() ; i++){
        if ( str[i] == c){return 0;}
    }
    return -1 ;
}
 
int main() {
    string n ;
    char m ; 
    cin >> n >> m; 
    cout << containsChar(n , m);
}
 
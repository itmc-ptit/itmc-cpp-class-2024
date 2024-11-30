#include <bits/stdc++.h>

using namespace std ;

bool containsChar(string str, char c ){
    for (int i = 0 ; i < str.size() ; i++){
        if ( str[i] == c){return true;}
    }
    return false ;
}
 
int main() {
    string n ;
    char m ; 
    cin >> n >> m; 
    containsChar(n,m) ? cout << "true" : cout << "flase" ;
}
 
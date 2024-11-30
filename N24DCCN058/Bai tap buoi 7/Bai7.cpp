#include <bits/stdc++.h>

using namespace std ;

bool isPalindrome(int n){
    string u = to_string(n);
    for (int i = 0 ; i < u.size() ; i++){
        if ( u[i] != u[u.size()-1-i]){return false ;}
    }
    return true ;
}
 
int main() {
    int  n ; 
    cin >> n ;
    isPalindrome(n) ? cout << "true" : cout << "false" ;
}
 
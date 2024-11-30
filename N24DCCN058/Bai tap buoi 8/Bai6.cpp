#include <bits/stdc++.h>

using namespace std ;

string CountStr(string str){
    string count ;
    for (int i = 0 ; i < str.size() ; i++){
        if ( str[i] != ' '){
            count += str[i] ;
        }    
    }
    return count ;
}
 
int main() {
    string n ;
    getline(cin , n) ;
    cout << CountStr(n) ;
}
 
#include <bits/stdc++.h>

using namespace std ;

string Mirror(string str){
    string u ; 
    for (int i = str.size() -1 ; i >= 0 ; i--){
       u += str[i];
    }
    return u ;
}
 
int main() {
    string n ;
    cin >> n  ;
    cout << Mirror(n) ;
}
 
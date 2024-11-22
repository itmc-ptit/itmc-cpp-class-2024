#include <bits/stdc++.h>

using namespace std ;

string To_upper(string str){
    string u ;
    for (int i = 0 ; i < str.size() ; i++){
        u += toupper(str[i]);
    }
    return u ;
}
 
int main() {
    string n ;
    cin >> n ;
    cout << To_upper(n) ;
}
 
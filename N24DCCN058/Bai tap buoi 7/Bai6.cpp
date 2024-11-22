#include <bits/stdc++.h>

using namespace std ;

string Str_n(string str){
    map<char , bool> Save ;
    vector<char> u ;
    for (int i = 0 ; i < str.size() ; i++){
       if ( Save[str[i]] == false){u.push_back(str[i]);}
       Save[str[i]] = true  ; 
    }
    string v;
    for (int i = 0 ; i < u.size() ; i++){v += u[i] ;}
    return v ; 
    
}
 
int main() {
    string n ;
    cin >> n ; 
    cout << Str_n(n) ;
}
 
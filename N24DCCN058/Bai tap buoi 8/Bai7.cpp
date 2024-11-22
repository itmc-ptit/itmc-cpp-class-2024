#include <bits/stdc++.h>

using namespace std ;

string CountStr(string str){
    bool check = true;
    string count;
    for (int i = 0 ; i < str.size() ; i++){
        if (str[i] != ' '){
            count += str[i] ; 
            check = true ; 
        }else if (str[i] == ' ' && check){
            count += str[i];
            check = false ;
        }
    }
    return count ;
}
 
int main() {
    string n ;
    getline(cin , n) ;
    cout << CountStr(n) ;
}
 
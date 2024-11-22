#include <bits/stdc++.h>

using namespace std ;

int CountStr(string str){
    bool check = true;
    int count = 0;
    for (int i = 0 ; i < str.size() ; i++){
        if (check && str[i] != ' '){
            count += 1 ; 
            check = false ;
        }else if (str[i] == ' '){
            check = true ;
        }
    }
    return count ;
}
 
int main() {
    string n ;
    getline(cin , n) ;
    cout << CountStr(n) ;
}
 
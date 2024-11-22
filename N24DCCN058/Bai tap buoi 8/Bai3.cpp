#include <bits/stdc++.h>

using namespace std ;

int Compare(string str1 , string str2){
    if (str1.size() != str2.size() ){return false ;}
    for (int i = 0 ; i < str1.size() ; i++){
        if ( str1[i] != str2[i] ){return false ;}
    }
    return true  ;
}
 
int main() {
    string n , m ;
    cin >> n >> m ;
    Compare(n , m) ? cout << "true" : cout << "false" ;
}
 
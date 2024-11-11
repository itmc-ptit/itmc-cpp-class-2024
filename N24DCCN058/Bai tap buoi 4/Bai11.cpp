#include <iostream>
using namespace std;
int main() {
    int a  ; 
    cin >> a ; 
    string b[10] = {"muoi","mot" ,"hai","ba","bon","nam","sau","bay","tam","chinh"};
    int n = a/10 , m = a%10 ;
    if ( a < 10 ){
        a == 0 ? cout << "khong" : cout << b[a] ;
    }else if ( a > 9 && a < 20){
        cout << b[n] << " " << b[m] ; 
    }else{
        cout << b[n] <<" " << "muoi" << " " << b[m];
    }
  
    return 0 ; 
}
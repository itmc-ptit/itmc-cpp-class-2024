#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int d;
    for(int i = 2; i <= n; i++){
        d=0;
        while(n % i == 0){
            d+=1;
            n /= i;
        }
        if(d!=0){
            cout << i;
            if(d > 1){
                cout << "^" << d;
            } 
            if(n > i){
                cout << " x ";
            }
        }
    }
    
}
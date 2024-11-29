#include <iostream>
using namespace std;

bool isPerfectNumber(int n){
    int m = 0;
    for(int i = 1;i <= n/2;i++){
        if(n % i == 0){
            m += i;
        }
    }
    if(m == n){
        return true;
    }else{
        return false;
    }
}

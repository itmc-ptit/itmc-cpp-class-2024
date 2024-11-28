#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void printPrimesInRange(int start, int end){
    bool first = true;
    for(int i = start;i <= end; i++){
        if(isPrime(i)){
            if(!(first)){
                cout << ", " << i;
            }else{
                cout << i;
                first = false;
            }
        }
    }
}


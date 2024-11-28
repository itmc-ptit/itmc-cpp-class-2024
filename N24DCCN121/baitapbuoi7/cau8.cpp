#include <iostream>
using namespace std;

bool isPalindrome(int n){
    if(n < 0){
        return false;
    }
    int temp;
    int sum = 0;
    int m = n;
    while(n > 0){
        temp = n%10;
        sum = sum*10+temp;
        n = n/10;
    }
    if(sum == m){
        return true;
    }
    return false;
}
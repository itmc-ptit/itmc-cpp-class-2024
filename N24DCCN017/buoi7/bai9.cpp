#include<iostream>
using namespace std;
int fibbonaci(int n){
    if(n==1||n==2){
        return 1;
    }
    n=fibbonaci(n-1)+fibbonaci(n-2);
    return n;
}
int main(){
    cout<<fibbonaci(9);
}
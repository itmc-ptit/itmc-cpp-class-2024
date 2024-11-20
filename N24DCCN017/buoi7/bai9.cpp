#include<iostream>
using namespace std;
int fibbonaci(int n){
    if(n==1||n==2){
        return 1;
    }
    else return fibbonaci(n-1)+fibbonaci(n-2);
}
int main(){
    cout<<fibbonaci(9);
}
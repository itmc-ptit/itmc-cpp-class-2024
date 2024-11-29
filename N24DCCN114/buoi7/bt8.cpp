#include <iostream>
using namespace std;
bool isPalindrome(int n){
    int a=0,b=n;
    while (n>0){
        a=a*10+n%10;
        n/=10;
    }
    if(b==a)
        return true;
    else 
        return false;
}
int main(){
    int n;
    cout <<"nhap so can kiem tra ";
    cin >>n;
    cout <<(isPalindrome(n) ? "doi xung" : "khong doi xung");
}
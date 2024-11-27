#include<iostream>
using namespace std;
bool isPalindrome(int n){
    string str =to_string(n);
    int start=0,end=str.length()-1;
    bool kt=true;
    for(int i=0;i<=int(str.length()/2);i++){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    cout<<isPalindrome(1266612);
}
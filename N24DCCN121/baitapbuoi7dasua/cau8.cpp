#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n){
    string str = to_string(n);
    int dem = 0;
    for(int i = 0;i < str.size();i++){
        if(str.compare(i,1,str,str.size()-i-1,1) == 1){
            dem++;
        }
    }
    if(dem != 0){
        return false;
    }else{
        return true;
    }
}
#include<iostream>
using namespace std;
bool containChar(string str, char c){
    for(int i=0;i<str.length();i++){
        if(str[i]==c){
            return true;
        }
    }
    return false;
}

int main(){
    cout<<containChar("hello",'x');
}
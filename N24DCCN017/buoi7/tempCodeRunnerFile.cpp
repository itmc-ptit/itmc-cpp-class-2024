#include<iostream>
using namespace std;
string removeDuplicates(string str){
    string x=" ";
    x+=str[0];
    for(char ch1: str){
        bool kt=true;
        for(char ch2:x){
            if(ch1==ch2) {
                kt=false;
                break;
            }
        }
        if(kt) x+=ch1;
    }
    return x;
}
int main(){
    cout<<removeDuplicates("aaaaabcccddddbbbaxxxxxxxyxyxyxyzzzzz");
}
#include <iostream>
#include <string>
using namespace std;
string removeDuplicates(string str){
    string A="";
    A+=str[0];
    for (int i=1;i<str.length();i++){
        if(str[i]!=str[i-1]){
            A+=str[i];
        }
    } 
    return A; 
}
int main(){
    string A;
    cout <<"nhap chuoi ki tu ";
    cin >>A;
    cout <<removeDuplicates(A);
}
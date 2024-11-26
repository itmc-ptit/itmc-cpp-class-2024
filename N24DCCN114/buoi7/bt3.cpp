#include <iostream>
using namespace std;
bool containsChar(string str, char c){
    int a=0;
    for (int i=0;i<sizeof(string);i++){
        if(str[i]==c){
            a=1;
            break;
        }
        else 
            a=0;
    }
    if (a==1)
        return true;
    else
        return false;
}
int main(){
    string str;
    char c;
    cout <<"nhap chuoi can kiem tra ";
    cin >>str;
    cout <<"nhap ki tu kiem tra ";
    cin >>c;
    cout <<(containsChar(str,c) ? "true" :"false");
}
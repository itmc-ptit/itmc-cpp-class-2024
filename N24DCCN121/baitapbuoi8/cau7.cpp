#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "  Cau  lac       bo  ITMC     ", stri;
    int n = str.size();
    bool First = false;
    for(int i = 0;i < n;i++){
        if(str[i] != ' '){
                stri += str[i];
                First = true;
        }else if(str[i] == ' '){
            if(First){
                stri += ' ';
                First = false;
            }
        }
    }
    if(str[n-1] == ' '){
        stri.erase(stri.size());
    }
    cout << stri;
}
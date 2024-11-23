#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str;
    cout << "Nhap chuoi:";
    cin >> str;
    for(int i = 0;i < str.size(); i++){
        str.at(i)=tolower(str.at(i));
    }
    cout << str;
    return 0;
}
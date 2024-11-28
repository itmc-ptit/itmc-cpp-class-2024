#include <iostream>
using namespace std;

int main(){
    string str1, str2;
    cout << "Nhap chuoi 1:";
    cin >> str1;
    cout << "Nhap chuoi 2:";
    cin >> str2;
    if(str1 == str2){
        cout << "true";
    }
    else{
        cout << "false";
    }
}
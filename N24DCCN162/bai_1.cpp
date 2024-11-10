#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    string a;
    cout <<  "Hay nhap 1 chu "<< endl;
    cin >> a;
    for (char c : a){
        if(islower(c)){
            cout <<"Day la chu  viet thuong";
        }else if (isupper(c)){
            cout <<"Day la chu viet hoa ";
        }else {
            cout << "Day khong phai chu" ;                  
        }
    }
    return 0;
}
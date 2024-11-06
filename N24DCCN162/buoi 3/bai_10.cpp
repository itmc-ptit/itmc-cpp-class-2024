#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    string a;
    cout <<  "Hay nhap 1 chu ";
    cin >> a;
    for (char c : a){
        if(islower(c)){
            c = toupper(c);
            cout <<"Chu in hoa la: "<<c;
        }else if (isupper(c)){
            c = tolower(c);
            cout <<"Chu thuong la: "<<c;
        }
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Nhap chuoi:";
    cin >> str;
    string result;
    for(int i = 0; i <= str.size();i++){
        result.insert(0, 1, str[i]);
    }
    cout << result;
    return 0;
}
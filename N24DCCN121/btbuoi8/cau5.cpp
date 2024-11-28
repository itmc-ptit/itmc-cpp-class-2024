#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, n;
    cout << "Nhap chuoi:";
    cin >> str;
    cout << "Nhap chu can tim:";
    cin >> n;
    int i = str.find(n);
    cout << i;
    return 0;
}
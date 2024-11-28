#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int dem = 0;
    while(ss >> word){
        ++dem;
        cout << "Tu thu " << dem << " tach duoc : " << word << endl;
    }
    return 0;
}
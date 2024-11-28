#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() { 
    string kq="";
    string s;getline(cin,s);
    stringstream ss(s);
    string word;
    cout<<"[";
    while (ss>>word) {
       kq+='"'+word+'"'+','; 
    }
    kq.pop_back();
    cout<<kq<<"]";
    return 0;
}
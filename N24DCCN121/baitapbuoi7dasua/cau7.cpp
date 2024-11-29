#include <iostream>
#include <vector>
using namespace std;

string removeDuplicates(string str){
    string result;
    vector<char> v;
    bool First = true;
    for(char ch : str){
        if(First){
            result += ch;
            v.push_back(ch);
            First = false;
        }else{
            if(ch != v[v.size()-1]){
                result += ch;
                v.push_back(ch);
            }else{
                continue;
            }
        }
    }
    cout << result;
    return result;
}
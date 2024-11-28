#include <iostream>
using namespace std;

string removeDuplicates(string str){
    string result;
    for(char ch : str){
        bool isDuplicate = false;
        for(char cha : result){
            if(cha == ch){
                isDuplicate = true;
                break;
            }
        }
        if(!(isDuplicate)){
            result += ch;
        }
    }
    cout << result;
    return result;
}

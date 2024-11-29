#include <iostream>
using namespace std;

bool containsChar(string str, char c){
    for(char ch : str){
        if(ch == c){
            return true;
        }
    }
    return false;
}

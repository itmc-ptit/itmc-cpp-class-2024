#include <iostream>
#include <string>
using namespace std;

int countWords(string str){
    bool isInWord = false;
    int dem = 0;
    for(char ch : str){
        if(ch == 32){
            isInWord = false;
        }else if(!(isInWord)){
            dem++;
            isInWord = true;
        }
    }
    cout << dem;
}

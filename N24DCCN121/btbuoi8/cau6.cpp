#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str = "  Cau     lac   bo    ITMC  ", stri;
    vector<string> v;
    for(int i = 0; i < str.size();i++){
        if(str[i] == ' '){
            if(!stri.empty()){
                v.push_back(stri);
                stri.clear();
            }
        }else{
            stri += str[i];
        }
    }
    cout << "[";
    for(int i = 0;i < v.size(); i++){
        cout << "\"" << v[i] << "\"" ;
        if(i < v.size()-1){
            cout << ",";
        }
    }
    cout << "]";
    return 0;
}
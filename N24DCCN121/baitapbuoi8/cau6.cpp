#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str = "Cau     lac   bo    ITMC", stri;
    vector<string> v;
    bool First = true;
    for(int i = 0;i < str.size();i++){
        if(str[i] != ' '){
            stri += str[i];
            First = true;
        }else if(str[i] == ' '){
            if(First == true){
                v.push_back(stri);
                stri.clear();
                First = false;
            }
        }
    }
    if(!str.empty()){
        v.push_back(stri);
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
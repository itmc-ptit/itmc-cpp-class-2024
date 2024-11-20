#include<iostream>
using namespace std;
string removeDuplicates(string str){
    for(int i=1;i<=str.length()-1;i++){
        while(str[i]==str[i-1]){
            str.erase(i-1,1);
        }
        cout<<str<<endl;
    }
    return str;
}

int main(){
    cout<<removeDuplicates("aaaaabcccddddbbba");
}
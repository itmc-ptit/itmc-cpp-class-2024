#include <bits/stdc++.h>
using namespace std; 
int cnt[256]={0};
void str(string s){
    for(int i=0; i<s.size(); i++){
        cnt[s[i]]++;
    }

}
int main(){
    string s; 
    cin >> s; 
    str(s);
    for(int i=0; i<s.size(); i++){
        if(cnt[s[i]]!=0){
            cout << s[i]; 
            cnt[s[i]]=0;
        }
    }
}
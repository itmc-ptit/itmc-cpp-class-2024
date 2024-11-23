#include <iostream>
#include <string>
using namespace std;
bool containsChar(string s,char c){
      for (int i=0;i<s.size();i++){
      	    if ( s[i]==c) return true;
	  }	
	  return false;
}
int main(){
	string s;char c;
	cin>>s>>c;
	if(containsChar(s,c) ){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}

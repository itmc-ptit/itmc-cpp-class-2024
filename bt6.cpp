#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string x="";
	string s;getline(cin,s);
	stringstream ss(s);
	string word;
	while(ss>>word){
	     x=x+word+",";	
	 }
	cout<<"["<<x<<"]";
}

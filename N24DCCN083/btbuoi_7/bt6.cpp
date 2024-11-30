#include <iostream>
#include <sstream>
using namespace std;
int countWords(string  str){
	int dem=0;
	stringstream ss(str);
	string word;
	while(ss>>word){
		dem++;
	}
	return dem;
}
int main(){
	string x;
	getline(cin,x);
	cout<<countWords(x);
	return 0;
}

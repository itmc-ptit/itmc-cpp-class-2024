#include <iostream>
#include <string>
using namespace std;
string removeDuplicates(string str){
	bool seen[256]={false};
		std::string kq ="";
		for (char c : str){
			if (!seen[c]){
				kq+=c;
				seen[c]=true;
			}
		}
		return kq;	
}
int main(){
	string x;
	getline(cin,x);
	cout<< removeDuplicates(x);
	return 0;
}

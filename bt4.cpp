#include <iostream>
#include <string>
using namespace std;
int main(){
	string x;
	cin>>x;
	for (int i=0;i<x.size();i++){
		if (x[i]>='A'&&x[i]<='Z'){
			x[i]=x[i]+32;
		}
	}
	for (int i=0;i<x.size();i++){
		cout<<x[i];
	}
	return 0;
}

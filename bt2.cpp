#include<iostream>
using namespace std;
bool isPerfectNumber(int n){
    int tong=0;
	for (int i=1;i<n;i++){
		if (n%i==0){
			tong=tong+i;
		}
	}
	if(tong!=n)return false;
}
int main(){
	int n;cin>>n;
	if( isPerfectNumber(n)){
		cout<<"la so hoan hao";
	}
	else{
		cout<<"khong la so hoan hao";
	}
	return 0;
}

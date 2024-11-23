#include <iostream>
#include <cmath>
using namespace std;
bool ktra(int n){
	if( n<=1)return false;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return false;
	}
	return true;
}
void printPrimesInRange(int start,int end){
	for (int i=start; i<= end; i++) {
		if (ktra(i)){
			cout<<i<<" ";
		}	
}
}
main(){
	int start,end;
	cin>>start>>end;
	printPrimesInRange(start,end);
}

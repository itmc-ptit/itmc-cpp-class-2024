#include <iostream>
using namespace std;
int main() {
	int n,i,tonguoc=0;
	cin>>n;
	for (i=2;i<=n-1;i++){
		if (n%i!=0){
			tonguoc=tonguoc+i;
		}
	}
	if (tonguoc=n){
		cout<<n<<"la so hoan hao";
	}
return 0;
}
	

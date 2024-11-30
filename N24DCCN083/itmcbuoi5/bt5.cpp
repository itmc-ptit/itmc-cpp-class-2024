#include <iostream>
#include <cmath>  
using namespace std;
int main(){
	int n;cin>>n;
	for(int i=2;i<n;i++){
		bool ktra=true;
		for (int j=2;j<sqrt(n);j++){
			if(i%j==0&&i!=j){
				ktra=false;
				break;
			}
		}
		if (ktra){
		cout<<i<< " ";
	}
}
return 0;	
}

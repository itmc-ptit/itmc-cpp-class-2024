#include <iostream>
using namespace std;
int main() {
	int n,x;
	cin>>n;
    if (n<=1){
    	cout<<n<<"khong phai la so nguyen to";
	}
	if (n>1){
		for (x=2;x<=n-1;x++){
			if (n%x==0){
				cout<<n<<"khong la so nguyen to";}
				else{cout<<n<<" la so nguyen to";}
			}
		}
	}
return 0;
}

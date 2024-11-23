#include <iostream>
using namespace std;
int main() {
	int n=0 ,chan=0,le=0;
	while (n>=0){
		cout<<"Nhap gtri cua n:";
		cin>>n;
		if (n<0){
			break;
		}
		n%2==0?chan++:le++;
	}
	cout<<"so chan:"<<chan;
	cout<<"so le:"<<le;
return 0;
}

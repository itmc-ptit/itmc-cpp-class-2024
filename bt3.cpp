#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int i,j;
	for (i=1;i<=9;i++){
		cout<<"bang cuu chuong cua "<<i<<" la:"<<endl;
		for (j=1;j<=10;j++){
		cout<<i<<"X"<<j<<"="<<i*j<<endl;
		}
		cout<<endl;
	}
	return 0;
}
